#pragma once
// IWYU pragma private; include "System/Xml/XmlDownloadManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
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
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Xml {
struct XmlDownloadManager__GetNonFileStreamAsync_d__5;
}
namespace System::Xml {
class XmlDownloadManager___c__DisplayClass4_0;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Xml {
class XmlDownloadManager___c__DisplayClass4_0;
}
namespace System::Xml {
struct XmlDownloadManager__GetNonFileStreamAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDownloadManager);
MARK_REF_PTR_T(::System::Xml::XmlDownloadManager___c__DisplayClass4_0);
MARK_VAL_T(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDownloadManager/<>c__DisplayClass4_0
class CORDL_TYPE XmlDownloadManager___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field uri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uri, put = __cordl_internal_set_uri)) ::System::Uri* uri;

  static inline ::System::Xml::XmlDownloadManager___c__DisplayClass4_0* New_ctor();

  /// @brief Method <GetStreamAsync>b__0, addr 0x435e628, size 0x8c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* _GetStreamAsync_b__0();

  constexpr ::System::Uri* const& __cordl_internal_get_uri() const;

  constexpr ::System::Uri*& __cordl_internal_get_uri();

  constexpr void __cordl_internal_set_uri(::System::Uri* value);

  /// @brief Method .ctor, addr 0x435e510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDownloadManager___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDownloadManager___c__DisplayClass4_0(XmlDownloadManager___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDownloadManager___c__DisplayClass4_0(XmlDownloadManager___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7346 };

  /// @brief Field uri, offset: 0x10, size: 0x8, def value: None
  ::System::Uri* ___uri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDownloadManager___c__DisplayClass4_0, ___uri) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDownloadManager___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlDownloadManager/<GetNonFileStreamAsync>d__5
struct CORDL_TYPE XmlDownloadManager__GetNonFileStreamAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x435e6b4, size 0x790, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x435ee44, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDownloadManager__GetNonFileStreamAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value:
  // None }, CppParam { name: "credentials", ty: "::System::Net::ICredentials*", modifiers: "", def_value: None }, CppParam { name: "proxy", ty: "::System::Net::IWebProxy*", modifiers: "", def_value:
  // None }, CppParam { name: "cachePolicy", ty: "::System::Net::Cache::RequestCachePolicy*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Xml::XmlDownloadManager*",
  // modifiers: "", def_value: None }, CppParam { name: "_req_5__2", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: None }]
  constexpr XmlDownloadManager__GetNonFileStreamAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> __t__builder, ::System::Uri* uri,
                                                           ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy,
                                                           ::System::Xml::XmlDownloadManager* __4__this, ::System::Net::WebRequest* _req_5__2,
                                                           ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7347 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

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
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebResponse*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, uri) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, credentials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, proxy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, cachePolicy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, _req_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, 0x60>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDownloadManager
class CORDL_TYPE XmlDownloadManager : public ::System::Object {
public:
  // Declarations
  using _GetNonFileStreamAsync_d__5 = ::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5;

  using __c__DisplayClass4_0 = ::System::Xml::XmlDownloadManager___c__DisplayClass4_0;

  /// @brief Field connections, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_connections, put = __cordl_internal_set_connections)) ::System::Collections::Hashtable* connections;

  /// @brief Method GetNonFileStream, addr 0x435dbe8, size 0x468, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetNonFileStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  /// @brief Method GetNonFileStreamAsync, addr 0x435e518, size 0x108, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetNonFileStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy,
                                                                                          ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  /// @brief Method GetStream, addr 0x435dae8, size 0x100, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetStream(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy, ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  /// @brief Method GetStreamAsync, addr 0x435e3b0, size 0x160, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* GetStreamAsync(::System::Uri* uri, ::System::Net::ICredentials* credentials, ::System::Net::IWebProxy* proxy,
                                                                                   ::System::Net::Cache::RequestCachePolicy* cachePolicy);

  static inline ::System::Xml::XmlDownloadManager* New_ctor();

  /// @brief Method Remove, addr 0x435e244, size 0x16c, virtual false, abstract: false, final false
  inline void Remove(::StringW host);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_connections() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_connections();

  constexpr void __cordl_internal_set_connections(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x435e620, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7348 };

  /// @brief Field connections, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___connections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDownloadManager, ___connections) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDownloadManager, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDownloadManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDownloadManager*, "System.Xml", "XmlDownloadManager");
NEED_NO_BOX(::System::Xml::XmlDownloadManager___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDownloadManager___c__DisplayClass4_0*, "System.Xml", "XmlDownloadManager/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDownloadManager__GetNonFileStreamAsync_d__5, "System.Xml", "XmlDownloadManager/<GetNonFileStreamAsync>d__5");
