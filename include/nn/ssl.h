/**
 * @brief SSL implementation.
 */
#pragma once

#include <nn/nn_Result.h>
#include <nn/ssl/ssl_Connection.h>
#include <nn/ssl/ssl_Context.h>
// @nncbindgen skip-start
#include <nn/ssl/ssl_BuiltInManager.h>
#include <nn/ssl/ssl_Debug.h>
#include <nn/ssl/ssl_ISslConnection.h>
#include <nn/ssl/ssl_ISslContext.h>
#include <nn/ssl/ssl_ISslService.h>
#include <nn/ssl/ssl_Types.h>
// @nncbindgen skip-end

namespace nn::ssl {

// @nncbindgen
nn::Result Initialize();
// @nncbindgen(rename=InitializeWithConcurrencyLimit)
nn::Result Initialize(uint32_t concurrencyLimit);
// @nncbindgen
nn::Result Finalize();
nn::Result GetSslResultFromValue(nn::Result*, const char*, uint32_t);

}  // namespace nn::ssl
