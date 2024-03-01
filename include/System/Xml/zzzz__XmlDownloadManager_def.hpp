#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDownloadManager)
namespace System::Collections {
class Hashtable;
}
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
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Xml {
struct __XmlDownloadManager___GetNonFileStreamAsync_d__5;
}
namespace System::Xml {
class __XmlDownloadManager____c__DisplayClass4_0;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Xml {
class __XmlDownloadManager____c__DisplayClass4_0;
}
namespace System::Xml {
struct __XmlDownloadManager___GetNonFileStreamAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDownloadManager);
MARK_REF_PTR_T(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0);
MARK_VAL_T(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::XmlDownloadManager::<>c__DisplayClass4_0*
class CORDL_TYPE __XmlDownloadManager____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field uri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri))::System::Uri* uri;

  static inline ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetStreamAsync>b__0, addr 0x298f31c, size 0x90, virtual false, abstract: false, final false
  inline ::System::IO::Stream* _GetStreamAsync_b__0();

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_uri() const;

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x298f1f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlDownloadManager____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlDownloadManager____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlDownloadManager____c__DisplayClass4_0(__XmlDownloadManager____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlDownloadManager____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlDownloadManager____c__DisplayClass4_0(__XmlDownloadManager____c__DisplayClass4_0 const&) = delete;

  /// @brief Field uri, offset: 0x10, size: 0x8, def value: None
  ::System::Uri* ___uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0, ___uri) == 0x10, "Offset mismatch!");

} // namespace System::Xml
// Type: ::<GetNonFileStreamAsync>d__5
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlDownloadManager::<GetNonFileStreamAsync>d__5
struct CORDL_TYPE __XmlDownloadManager___GetNonFileStreamAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x298f3ac, size 0x774, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x298fb20, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlDownloadManager___GetNonFileStreamAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value:
  // None }, CppParam { name: "credentials", ty: "::System::Net::ICredentials*", modifiers: "", def_value: None }, CppParam { name: "proxy", ty: "::System::Net::IWebProxy*", modifiers: "", def_value:
  // None }, CppParam { name: "cachePolicy", ty: "::System::Net::Cache::RequestCachePolicy*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlDownloadManager*",
  // modifiers: "", def_value: None }, CppParam { name: "_req_5__2", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: None }]
  constexpr __XmlDownloadManager___GetNonFileStreamAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder, ::System::Uri* uri,
                                                              ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy,
                                                              ::System::Xml::XmlDownloadManager* __4__this, ::System::Net::WebRequest* _req_5__2,
                                                              ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder;

  /// @brief Field uri, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* uri;

  /// @brief Field credentials, offset: 0x28, size: 0x8, def value: None
  ::System::Net::ICredentials* credentials;

  /// @brief Field proxy, offset: 0x30, size: 0x8, def value: None
  ::System::Net::IWebProxy* proxy;

  /// @brief Field cachePolicy, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Cache::RequestCachePolicy* cachePolicy;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlDownloadManager* __4__this;

  /// @brief Field <req>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Net::WebRequest* _req_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, uri) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, credentials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, proxy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, cachePolicy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, _req_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, __u__1) == 0x50, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlDownloadManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlDownloadManager*
class CORDL_TYPE XmlDownloadManager : public ::System::Object {
public:
  // Declarations
  using _GetNonFileStreamAsync_d__5 = ::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5;

  using __c__DisplayClass4_0 = ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0;

  /// @brief Field connections, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connections, put = __cordl_internal_set_connections))::System::Collections::Hashtable* connections;

  /// @brief Method GetNonFileStream, addr 0x298e898, size 0x490, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetNonFileStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  /// @brief Method GetNonFileStreamAsync, addr 0x298f1fc, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetNonFileStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy,
                                                                                          ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  /// @brief Method GetStream, addr 0x298e794, size 0x104, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  /// @brief Method GetStreamAsync, addr 0x298f090, size 0x164, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy,
                                                                                   ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  static inline ::System::Xml::XmlDownloadManager* New_ctor();

  /// @brief Method Remove, addr 0x298ef24, size 0x16c, virtual false, abstract: false, final false
  inline void Remove(::StringW host);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_connections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_connections() const;

  constexpr void __cordl_internal_set_connections(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x298f314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDownloadManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDownloadManager(XmlDownloadManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDownloadManager(XmlDownloadManager const&) = delete;

  /// @brief Field connections, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___connections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDownloadManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager, ___connections) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDownloadManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDownloadManager*, "System.Xml", "XmlDownloadManager");
NEED_NO_BOX(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*, "System.Xml", "XmlDownloadManager/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5, "System.Xml", "XmlDownloadManager/<GetNonFileStreamAsync>d__5");
