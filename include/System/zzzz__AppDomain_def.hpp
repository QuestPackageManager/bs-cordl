#pragma once
// IWYU pragma private; include "System/AppDomain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDomain)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::ExceptionServices {
class FirstChanceExceptionEventArgs;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class AssemblyLoadEventHandler;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
namespace System {
class ResolveEventHandler;
}
namespace System {
class UnhandledExceptionEventHandler;
}
// Forward declare root types
namespace System {
class AppDomain;
}
// Write type traits
MARK_REF_PTR_T(::System::AppDomain);
// Dependencies System.IntPtr, System.MarshalByRefObject
namespace System {
// Is value type: false
// CS Name: System.AppDomain
class CORDL_TYPE AppDomain : public ::System::MarshalByRefObject {
public:
  // Declarations
  /// @brief Field AssemblyLoad, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_AssemblyLoad, put = __cordl_internal_set_AssemblyLoad)) ::System::AssemblyLoadEventHandler* AssemblyLoad;

  /// @brief Field AssemblyResolve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_AssemblyResolve, put = __cordl_internal_set_AssemblyResolve)) ::System::ResolveEventHandler* AssemblyResolve;

  /// @brief Field DomainUnload, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_DomainUnload, put = __cordl_internal_set_DomainUnload)) ::System::EventHandler* DomainUnload;

  /// @brief Field FirstChanceException, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_FirstChanceException,
                      put = __cordl_internal_set_FirstChanceException)) ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* FirstChanceException;

  __declspec(property(get = get_IsFullyTrusted)) bool IsFullyTrusted;

  __declspec(property(get = get_IsHomogenous)) bool IsHomogenous;

  /// @brief Field ProcessExit, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ProcessExit, put = __cordl_internal_set_ProcessExit)) ::System::EventHandler* ProcessExit;

  /// @brief Field ReflectionOnlyAssemblyResolve, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_ReflectionOnlyAssemblyResolve, put = __cordl_internal_set_ReflectionOnlyAssemblyResolve)) ::System::ResolveEventHandler* ReflectionOnlyAssemblyResolve;

  /// @brief Field ResourceResolve, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceResolve, put = __cordl_internal_set_ResourceResolve)) ::System::ResolveEventHandler* ResourceResolve;

  /// @brief Field TypeResolve, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeResolve, put = __cordl_internal_set_TypeResolve)) ::System::ResolveEventHandler* TypeResolve;

  /// @brief Field UnhandledException, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_UnhandledException, put = __cordl_internal_set_UnhandledException)) ::System::UnhandledExceptionEventHandler* UnhandledException;

  /// @brief Field _activation, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__activation, put = __cordl_internal_set__activation)) ::System::Object* _activation;

  /// @brief Field _applicationIdentity, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__applicationIdentity, put = __cordl_internal_set__applicationIdentity)) ::System::Object* _applicationIdentity;

  /// @brief Field _domain_manager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__domain_manager, put = __cordl_internal_set__domain_manager)) ::System::Object* _domain_manager;

  /// @brief Field _evidence, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__evidence, put = __cordl_internal_set__evidence)) ::System::Object* _evidence;

  /// @brief Field _granted, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__granted, put = __cordl_internal_set__granted)) ::System::Object* _granted;

  /// @brief Field _mono_app_domain, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mono_app_domain, put = __cordl_internal_set__mono_app_domain)) ::System::IntPtr _mono_app_domain;

  /// @brief Field _principalPolicy, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__principalPolicy, put = __cordl_internal_set__principalPolicy)) int32_t _principalPolicy;

  /// @brief Field _process_guid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__process_guid, put = setStaticF__process_guid)) ::StringW _process_guid;

  /// @brief Field assembly_resolve_in_progress, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_assembly_resolve_in_progress,
                      put = setStaticF_assembly_resolve_in_progress)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* assembly_resolve_in_progress;

  /// @brief Field assembly_resolve_in_progress_refonly, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_assembly_resolve_in_progress_refonly,
                      put = setStaticF_assembly_resolve_in_progress_refonly)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* assembly_resolve_in_progress_refonly;

  /// @brief Field compatibility_switch, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_compatibility_switch, put = __cordl_internal_set_compatibility_switch)) ::System::Collections::Generic::List_1<::StringW>* compatibility_switch;

  /// @brief Field type_resolve_in_progress, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_type_resolve_in_progress,
                      put = setStaticF_type_resolve_in_progress)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* type_resolve_in_progress;

  /// @brief Method DoAssemblyLoad, addr 0x3e2efec, size 0x90, virtual false, abstract: false, final false
  inline void DoAssemblyLoad(::System::Reflection::Assembly* assembly);

  /// @brief Method DoAssemblyResolve, addr 0x3e2f07c, size 0x2fc, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* DoAssemblyResolve(::StringW name, ::System::Reflection::Assembly* requestingAssembly, bool refonly);

  /// @brief Method DoDomainUnload, addr 0x3e2f644, size 0x24, virtual false, abstract: false, final false
  inline void DoDomainUnload();

  /// @brief Method DoTypeResolve, addr 0x3e2f378, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* DoTypeResolve(::StringW name);

  /// @brief Method GetAssemblies, addr 0x3e2ec50, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetAssemblies();

  /// @brief Method GetAssemblies, addr 0x3e2ec48, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetAssemblies(bool refOnly);

  /// @brief Method GetData, addr 0x3e2ec58, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* GetData(::StringW name);

  /// @brief Method GetMarshalledDomainObjRef, addr 0x3e2f668, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMarshalledDomainObjRef();

  /// @brief Method GetProcessGuid, addr 0x3e2ef40, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GetProcessGuid();

  /// @brief Method InitializeLifetimeService, addr 0x3e2ec5c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* InitializeLifetimeService();

  /// @brief Method InternalGetContext, addr 0x3e2eda4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Contexts::Context* InternalGetContext();

  /// @brief Method InternalGetDefaultContext, addr 0x3e2eda8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext();

  /// @brief Method InternalGetProcessGuid, addr 0x3e2edac, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW InternalGetProcessGuid(::StringW newguid);

  /// @brief Method InternalIsFinalizingForUnload, addr 0x3e2efc8, size 0x4, virtual false, abstract: false, final false
  static inline bool InternalIsFinalizingForUnload(int32_t domain_id);

  /// @brief Method InternalPopDomainRef, addr 0x3e2ed9c, size 0x4, virtual false, abstract: false, final false
  static inline void InternalPopDomainRef();

  /// @brief Method InternalPushDomainRefByID, addr 0x3e2ed98, size 0x4, virtual false, abstract: false, final false
  static inline void InternalPushDomainRefByID(int32_t domain_id);

  /// @brief Method InternalSetContext, addr 0x3e2eda0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Contexts::Context* InternalSetContext(::System::Runtime::Remoting::Contexts::Context* context);

  /// @brief Method InternalSetDomain, addr 0x3e2ed94, size 0x4, virtual false, abstract: false, final false
  static inline ::System::AppDomain* InternalSetDomain(::System::AppDomain* context);

  /// @brief Method InternalSetDomainByID, addr 0x3e2ed90, size 0x4, virtual false, abstract: false, final false
  static inline ::System::AppDomain* InternalSetDomainByID(int32_t domain_id);

  /// @brief Method InvokeInDomainByID, addr 0x3e2edb0, size 0x190, virtual false, abstract: false, final false
  static inline ::System::Object* InvokeInDomainByID(int32_t domain_id, ::System::Reflection::MethodInfo* method, ::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method IsAppXModel, addr 0x3e2ec2c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsAppXModel();

  /// @brief Method IsFinalizingForUnload, addr 0x3e2efcc, size 0x14, virtual false, abstract: false, final false
  inline bool IsFinalizingForUnload();

  /// @brief Method Load, addr 0x3e2ec6c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Reflection::Assembly* Load(::StringW assemblyString);

  /// @brief Method Load, addr 0x3e2ec90, size 0x100, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* Load(::StringW assemblyString, ::System::Security::Policy::Evidence* assemblySecurity, bool refonly, ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method LoadAssembly, addr 0x3e2ec64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* LoadAssembly(::StringW assemblyRef, ::System::Security::Policy::Evidence* securityEvidence, bool refOnly,
                                                      ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  static inline ::System::AppDomain* New_ctor();

  /// @brief Method ProcessMessageInDomain, addr 0x3e2f740, size 0x128, virtual false, abstract: false, final false
  inline void ProcessMessageInDomain(::ArrayW<uint8_t, ::Array<uint8_t>*> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg,
                                     ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> arrResponse, ::ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*> cadMrm);

  /// @brief Method ToString, addr 0x3e2efe8, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::AssemblyLoadEventHandler* const& __cordl_internal_get_AssemblyLoad() const;

  constexpr ::System::AssemblyLoadEventHandler*& __cordl_internal_get_AssemblyLoad();

  constexpr ::System::ResolveEventHandler* const& __cordl_internal_get_AssemblyResolve() const;

  constexpr ::System::ResolveEventHandler*& __cordl_internal_get_AssemblyResolve();

  constexpr ::System::EventHandler* const& __cordl_internal_get_DomainUnload() const;

  constexpr ::System::EventHandler*& __cordl_internal_get_DomainUnload();

  constexpr ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* const& __cordl_internal_get_FirstChanceException() const;

  constexpr ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>*& __cordl_internal_get_FirstChanceException();

  constexpr ::System::EventHandler* const& __cordl_internal_get_ProcessExit() const;

  constexpr ::System::EventHandler*& __cordl_internal_get_ProcessExit();

  constexpr ::System::ResolveEventHandler* const& __cordl_internal_get_ReflectionOnlyAssemblyResolve() const;

  constexpr ::System::ResolveEventHandler*& __cordl_internal_get_ReflectionOnlyAssemblyResolve();

  constexpr ::System::ResolveEventHandler* const& __cordl_internal_get_ResourceResolve() const;

  constexpr ::System::ResolveEventHandler*& __cordl_internal_get_ResourceResolve();

  constexpr ::System::ResolveEventHandler* const& __cordl_internal_get_TypeResolve() const;

  constexpr ::System::ResolveEventHandler*& __cordl_internal_get_TypeResolve();

  constexpr ::System::UnhandledExceptionEventHandler* const& __cordl_internal_get_UnhandledException() const;

  constexpr ::System::UnhandledExceptionEventHandler*& __cordl_internal_get_UnhandledException();

  constexpr ::System::Object* const& __cordl_internal_get__activation() const;

  constexpr ::System::Object*& __cordl_internal_get__activation();

  constexpr ::System::Object* const& __cordl_internal_get__applicationIdentity() const;

  constexpr ::System::Object*& __cordl_internal_get__applicationIdentity();

  constexpr ::System::Object* const& __cordl_internal_get__domain_manager() const;

  constexpr ::System::Object*& __cordl_internal_get__domain_manager();

  constexpr ::System::Object* const& __cordl_internal_get__evidence() const;

  constexpr ::System::Object*& __cordl_internal_get__evidence();

  constexpr ::System::Object* const& __cordl_internal_get__granted() const;

  constexpr ::System::Object*& __cordl_internal_get__granted();

  constexpr ::System::IntPtr const& __cordl_internal_get__mono_app_domain() const;

  constexpr ::System::IntPtr& __cordl_internal_get__mono_app_domain();

  constexpr int32_t const& __cordl_internal_get__principalPolicy() const;

  constexpr int32_t& __cordl_internal_get__principalPolicy();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_compatibility_switch() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_compatibility_switch();

  constexpr void __cordl_internal_set_AssemblyLoad(::System::AssemblyLoadEventHandler* value);

  constexpr void __cordl_internal_set_AssemblyResolve(::System::ResolveEventHandler* value);

  constexpr void __cordl_internal_set_DomainUnload(::System::EventHandler* value);

  constexpr void __cordl_internal_set_FirstChanceException(::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* value);

  constexpr void __cordl_internal_set_ProcessExit(::System::EventHandler* value);

  constexpr void __cordl_internal_set_ReflectionOnlyAssemblyResolve(::System::ResolveEventHandler* value);

  constexpr void __cordl_internal_set_ResourceResolve(::System::ResolveEventHandler* value);

  constexpr void __cordl_internal_set_TypeResolve(::System::ResolveEventHandler* value);

  constexpr void __cordl_internal_set_UnhandledException(::System::UnhandledExceptionEventHandler* value);

  constexpr void __cordl_internal_set__activation(::System::Object* value);

  constexpr void __cordl_internal_set__applicationIdentity(::System::Object* value);

  constexpr void __cordl_internal_set__domain_manager(::System::Object* value);

  constexpr void __cordl_internal_set__evidence(::System::Object* value);

  constexpr void __cordl_internal_set__granted(::System::Object* value);

  constexpr void __cordl_internal_set__mono_app_domain(::System::IntPtr value);

  constexpr void __cordl_internal_set__principalPolicy(int32_t value);

  constexpr void __cordl_internal_set_compatibility_switch(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3e2ec34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_AssemblyResolve, addr 0x3e2f868, size 0x98, virtual true, abstract: false, final true
  inline void add_AssemblyResolve(::System::ResolveEventHandler* value);

  /// @brief Method add_DomainUnload, addr 0x3e2fc54, size 0x98, virtual true, abstract: false, final true
  inline void add_DomainUnload(::System::EventHandler* value);

  /// @brief Method add_UnhandledException, addr 0x3e2fd84, size 0x98, virtual true, abstract: false, final true
  inline void add_UnhandledException(::System::UnhandledExceptionEventHandler* value);

  /// @brief Method getCurDomain, addr 0x3e2ec40, size 0x4, virtual false, abstract: false, final false
  static inline ::System::AppDomain* getCurDomain();

  /// @brief Method getDomainID, addr 0x3e2efe0, size 0x8, virtual false, abstract: false, final false
  inline int32_t getDomainID();

  /// @brief Method getFriendlyName, addr 0x3e2ec3c, size 0x4, virtual false, abstract: false, final false
  inline ::StringW getFriendlyName();

  static inline ::StringW getStaticF__process_guid();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* getStaticF_assembly_resolve_in_progress();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* getStaticF_assembly_resolve_in_progress_refonly();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* getStaticF_type_resolve_in_progress();

  /// @brief Method get_CurrentDomain, addr 0x3e2ec44, size 0x4, virtual false, abstract: false, final false
  static inline ::System::AppDomain* get_CurrentDomain();

  /// @brief Method get_IsFullyTrusted, addr 0x3e2febc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFullyTrusted();

  /// @brief Method get_IsHomogenous, addr 0x3e2feb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsHomogenous();

  /// @brief Method remove_AssemblyResolve, addr 0x3e2fa60, size 0x98, virtual true, abstract: false, final true
  inline void remove_AssemblyResolve(::System::ResolveEventHandler* value);

  /// @brief Method remove_DomainUnload, addr 0x3e2fcec, size 0x98, virtual true, abstract: false, final true
  inline void remove_DomainUnload(::System::EventHandler* value);

  /// @brief Method remove_UnhandledException, addr 0x3e2fe1c, size 0x98, virtual true, abstract: false, final true
  inline void remove_UnhandledException(::System::UnhandledExceptionEventHandler* value);

  static inline void setStaticF__process_guid(::StringW value);

  static inline void setStaticF_assembly_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  static inline void setStaticF_assembly_resolve_in_progress_refonly(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  static inline void setStaticF_type_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDomain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppDomain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDomain(AppDomain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDomain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDomain(AppDomain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2577 };

  /// @brief Field _mono_app_domain, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ____mono_app_domain;

  /// @brief Field _evidence, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____evidence;

  /// @brief Field _granted, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____granted;

  /// @brief Field _principalPolicy, offset: 0x30, size: 0x4, def value: None
  int32_t ____principalPolicy;

  /// @brief Field AssemblyLoad, offset: 0x38, size: 0x8, def value: None
  ::System::AssemblyLoadEventHandler* ___AssemblyLoad;

  /// @brief Field AssemblyResolve, offset: 0x40, size: 0x8, def value: None
  ::System::ResolveEventHandler* ___AssemblyResolve;

  /// @brief Field DomainUnload, offset: 0x48, size: 0x8, def value: None
  ::System::EventHandler* ___DomainUnload;

  /// @brief Field ProcessExit, offset: 0x50, size: 0x8, def value: None
  ::System::EventHandler* ___ProcessExit;

  /// @brief Field ResourceResolve, offset: 0x58, size: 0x8, def value: None
  ::System::ResolveEventHandler* ___ResourceResolve;

  /// @brief Field TypeResolve, offset: 0x60, size: 0x8, def value: None
  ::System::ResolveEventHandler* ___TypeResolve;

  /// @brief Field UnhandledException, offset: 0x68, size: 0x8, def value: None
  ::System::UnhandledExceptionEventHandler* ___UnhandledException;

  /// @brief Field FirstChanceException, offset: 0x70, size: 0x8, def value: None
  ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* ___FirstChanceException;

  /// @brief Field _domain_manager, offset: 0x78, size: 0x8, def value: None
  ::System::Object* ____domain_manager;

  /// @brief Field ReflectionOnlyAssemblyResolve, offset: 0x80, size: 0x8, def value: None
  ::System::ResolveEventHandler* ___ReflectionOnlyAssemblyResolve;

  /// @brief Field _activation, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ____activation;

  /// @brief Field _applicationIdentity, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____applicationIdentity;

  /// @brief Field compatibility_switch, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___compatibility_switch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::AppDomain, ____mono_app_domain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ____evidence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ____granted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ____principalPolicy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___AssemblyLoad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___AssemblyResolve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___DomainUnload) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___ProcessExit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___ResourceResolve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___TypeResolve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___UnhandledException) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___FirstChanceException) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ____domain_manager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___ReflectionOnlyAssemblyResolve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ____activation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ____applicationIdentity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::AppDomain, ___compatibility_switch) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::AppDomain, 0xa0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AppDomain);
DEFINE_IL2CPP_ARG_TYPE(::System::AppDomain*, "System", "AppDomain");
