#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Net/Http/ByteArrayContent.hpp"
#include "System/Net/Http/ClientCertificateOption.hpp"
#include "System/Net/Http/HttpClient.hpp"
#include "System/Net/Http/HttpClientHandler.hpp"
#include "System/Net/Http/HttpCompletionOption.hpp"
#include "System/Net/Http/HttpContent.hpp"
#include "System/Net/Http/HttpMessageHandler.hpp"
#include "System/Net/Http/HttpMessageInvoker.hpp"
#include "System/Net/Http/HttpMethod.hpp"
#include "System/Net/Http/HttpRequestException.hpp"
#include "System/Net/Http/HttpRequestMessage.hpp"
#include "System/Net/Http/HttpResponseMessage.hpp"
#include "System/Net/Http/IMonoHttpClientHandler.hpp"
#include "System/Net/Http/MonoWebRequestHandler.hpp"
#include "System/Net/Http/PlatformHelper.hpp"
#include "System/Net/Http/StreamContent.hpp"
#include "System/Net/Http/StringContent.hpp"
#ifdef __cpp_modules
export module Http;
#endif
