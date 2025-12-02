#pragma once
// IWYU pragma private; include "System/Xml/XmlUrlResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUrlResolver)
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Xml {
struct XmlUrlResolver__GetEntityAsync_d__15;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlUrlResolver;
}
namespace System::Xml {
struct XmlUrlResolver__GetEntityAsync_d__15;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUrlResolver);
MARK_VAL_T(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlUrlResolver/<GetEntityAsync>d__15
struct CORDL_TYPE XmlUrlResolver__GetEntityAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x60cb170, size 0x3cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x60cb53c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUrlResolver__GetEntityAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "ofObjectToReturn", ty: "::System::Type*", modifiers: "",
  // def_value: None }, CppParam { name: "absoluteUri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlUrlResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None }]
  constexpr XmlUrlResolver__GetEntityAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder, ::System::Type* ofObjectToReturn,
                                                 ::System::Uri* absoluteUri, ::System::Xml::XmlUrlResolver* __4__this,
                                                 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*> __t__builder;

  /// @brief Field ofObjectToReturn, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ofObjectToReturn;

  /// @brief Field absoluteUri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* absoluteUri;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlUrlResolver* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, ofObjectToReturn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, absoluteUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, 0x48>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlResolver
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlUrlResolver
class CORDL_TYPE XmlUrlResolver : public ::System::Xml::XmlResolver {
public:
  // Declarations
  using _GetEntityAsync_d__15 = ::System::Xml::XmlUrlResolver__GetEntityAsync_d__15;

  /// @brief Field _cachePolicy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cachePolicy, put = __cordl_internal_set__cachePolicy)) ::System::Net::Cache::RequestCachePolicy* _cachePolicy;

  /// @brief Field _credentials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__credentials, put = __cordl_internal_set__credentials)) ::System::Net::ICredentials* _credentials;

  /// @brief Field _proxy, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__proxy, put = __cordl_internal_set__proxy)) ::System::Net::IWebProxy* _proxy;

  /// @brief Field s_DownloadManager, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DownloadManager, put = setStaticF_s_DownloadManager)) ::System::Object* s_DownloadManager;

  /// @brief Method GetEntity, addr 0x60caf38, size 0x13c, virtual true, abstract: false, final false
  inline ::System::Object* GetEntity(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  /// @brief Method GetEntityAsync, addr 0x60cb078, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Object*>* GetEntityAsync(::System::Uri* absoluteUri, ::StringW role, ::System::Type* ofObjectToReturn);

  static inline ::System::Xml::XmlUrlResolver* New_ctor();

  /// @brief Method ResolveUri, addr 0x60cb074, size 0x4, virtual true, abstract: false, final false
  inline ::System::Uri* ResolveUri(::System::Uri* baseUri, ::StringW relativeUri);

  constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get__cachePolicy() const;

  constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get__cachePolicy();

  constexpr ::System::Net::ICredentials* const& __cordl_internal_get__credentials() const;

  constexpr ::System::Net::ICredentials*& __cordl_internal_get__credentials();

  constexpr ::System::Net::IWebProxy* const& __cordl_internal_get__proxy() const;

  constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy();

  constexpr void __cordl_internal_set__cachePolicy(::System::Net::Cache::RequestCachePolicy* value);

  constexpr void __cordl_internal_set__credentials(::System::Net::ICredentials* value);

  constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy* value);

  /// @brief Method .ctor, addr 0x60caf34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_s_DownloadManager();

  /// @brief Method get_DownloadManager, addr 0x60cae68, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDownloadManager* get_DownloadManager();

  static inline void setStaticF_s_DownloadManager(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUrlResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUrlResolver(XmlUrlResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUrlResolver(XmlUrlResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9438 };

  /// @brief Field _credentials, offset: 0x10, size: 0x8, def value: None
  ::System::Net::ICredentials* ____credentials;

  /// @brief Field _proxy, offset: 0x18, size: 0x8, def value: None
  ::System::Net::IWebProxy* ____proxy;

  /// @brief Field _cachePolicy, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Cache::RequestCachePolicy* ____cachePolicy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUrlResolver, ____credentials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver, ____proxy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlUrlResolver, ____cachePolicy) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUrlResolver, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUrlResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUrlResolver*, "System.Xml", "XmlUrlResolver");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUrlResolver__GetEntityAsync_d__15, "System.Xml", "XmlUrlResolver/<GetEntityAsync>d__15");
