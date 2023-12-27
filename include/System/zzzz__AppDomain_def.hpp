#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDomain)
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace System {
class ResolveEventHandler;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System {
class Object;
}
namespace System {
class EventHandler;
}
namespace System::Runtime::ExceptionServices {
class FirstChanceExceptionEventArgs;
}
namespace System {
class AssemblyLoadEventHandler;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace System {
class AppDomain;
}
// Write type traits
MARK_REF_PTR_T(::System::AppDomain);
// Type: System::AppDomain
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2575))
// CS Name: ::System::AppDomain*
class CORDL_TYPE AppDomain : public ::System::MarshalByRefObject {
public:
  // Declarations
  /// @brief Field _mono_app_domain, offset 0x18, size 0x8
  __declspec(property(get = __get__mono_app_domain, put = __set__mono_app_domain)) void* _mono_app_domain;

  /// @brief Field _evidence, offset 0x20, size 0x8
  __declspec(property(get = __get__evidence, put = __set__evidence))::System::Object* _evidence;

  /// @brief Field _granted, offset 0x28, size 0x8
  __declspec(property(get = __get__granted, put = __set__granted))::System::Object* _granted;

  /// @brief Field _principalPolicy, offset 0x30, size 0x4
  __declspec(property(get = __get__principalPolicy, put = __set__principalPolicy)) int32_t _principalPolicy;

  /// @brief Field AssemblyLoad, offset 0x38, size 0x8
  __declspec(property(get = __get_AssemblyLoad, put = __set_AssemblyLoad))::System::AssemblyLoadEventHandler* AssemblyLoad;

  /// @brief Field AssemblyResolve, offset 0x40, size 0x8
  __declspec(property(get = __get_AssemblyResolve, put = __set_AssemblyResolve))::System::ResolveEventHandler* AssemblyResolve;

  /// @brief Field DomainUnload, offset 0x48, size 0x8
  __declspec(property(get = __get_DomainUnload, put = __set_DomainUnload))::System::EventHandler* DomainUnload;

  /// @brief Field ProcessExit, offset 0x50, size 0x8
  __declspec(property(get = __get_ProcessExit, put = __set_ProcessExit))::System::EventHandler* ProcessExit;

  /// @brief Field ResourceResolve, offset 0x58, size 0x8
  __declspec(property(get = __get_ResourceResolve, put = __set_ResourceResolve))::System::ResolveEventHandler* ResourceResolve;

  /// @brief Field TypeResolve, offset 0x60, size 0x8
  __declspec(property(get = __get_TypeResolve, put = __set_TypeResolve))::System::ResolveEventHandler* TypeResolve;

  /// @brief Field UnhandledException, offset 0x68, size 0x8
  __declspec(property(get = __get_UnhandledException, put = __set_UnhandledException))::System::UnhandledExceptionEventHandler* UnhandledException;

  /// @brief Field FirstChanceException, offset 0x70, size 0x8
  __declspec(property(get = __get_FirstChanceException,
                      put = __set_FirstChanceException))::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* FirstChanceException;

  /// @brief Field _domain_manager, offset 0x78, size 0x8
  __declspec(property(get = __get__domain_manager, put = __set__domain_manager))::System::Object* _domain_manager;

  /// @brief Field ReflectionOnlyAssemblyResolve, offset 0x80, size 0x8
  __declspec(property(get = __get_ReflectionOnlyAssemblyResolve, put = __set_ReflectionOnlyAssemblyResolve))::System::ResolveEventHandler* ReflectionOnlyAssemblyResolve;

  /// @brief Field _activation, offset 0x88, size 0x8
  __declspec(property(get = __get__activation, put = __set__activation))::System::Object* _activation;

  /// @brief Field _applicationIdentity, offset 0x90, size 0x8
  __declspec(property(get = __get__applicationIdentity, put = __set__applicationIdentity))::System::Object* _applicationIdentity;

  /// @brief Field compatibility_switch, offset 0x98, size 0x8
  __declspec(property(get = __get_compatibility_switch, put = __set_compatibility_switch))::System::Collections::Generic::List_1<::StringW>* compatibility_switch;

  /// @brief Field _process_guid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__process_guid, put = setStaticF__process_guid))::StringW _process_guid;

  /// @brief Field type_resolve_in_progress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_type_resolve_in_progress,
                             put = setStaticF_type_resolve_in_progress))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* type_resolve_in_progress;

  /// @brief Field assembly_resolve_in_progress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_assembly_resolve_in_progress,
                             put = setStaticF_assembly_resolve_in_progress))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* assembly_resolve_in_progress;

  /// @brief Field assembly_resolve_in_progress_refonly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_assembly_resolve_in_progress_refonly,
                             put = setStaticF_assembly_resolve_in_progress_refonly))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* assembly_resolve_in_progress_refonly;

  constexpr void*& __get__mono_app_domain();

  constexpr void* const& __get__mono_app_domain() const;

  constexpr void __set__mono_app_domain(void* value);

  constexpr ::System::Object*& __get__evidence();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__evidence() const;

  constexpr void __set__evidence(::System::Object* value);

  constexpr ::System::Object*& __get__granted();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__granted() const;

  constexpr void __set__granted(::System::Object* value);

  constexpr int32_t& __get__principalPolicy();

  constexpr int32_t const& __get__principalPolicy() const;

  constexpr void __set__principalPolicy(int32_t value);

  constexpr ::System::AssemblyLoadEventHandler*& __get_AssemblyLoad();

  constexpr ::cordl_internals::to_const_pointer<::System::AssemblyLoadEventHandler*> const& __get_AssemblyLoad() const;

  constexpr void __set_AssemblyLoad(::System::AssemblyLoadEventHandler* value);

  constexpr ::System::ResolveEventHandler*& __get_AssemblyResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& __get_AssemblyResolve() const;

  constexpr void __set_AssemblyResolve(::System::ResolveEventHandler* value);

  constexpr ::System::EventHandler*& __get_DomainUnload();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& __get_DomainUnload() const;

  constexpr void __set_DomainUnload(::System::EventHandler* value);

  constexpr ::System::EventHandler*& __get_ProcessExit();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& __get_ProcessExit() const;

  constexpr void __set_ProcessExit(::System::EventHandler* value);

  constexpr ::System::ResolveEventHandler*& __get_ResourceResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& __get_ResourceResolve() const;

  constexpr void __set_ResourceResolve(::System::ResolveEventHandler* value);

  constexpr ::System::ResolveEventHandler*& __get_TypeResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& __get_TypeResolve() const;

  constexpr void __set_TypeResolve(::System::ResolveEventHandler* value);

  constexpr ::System::UnhandledExceptionEventHandler*& __get_UnhandledException();

  constexpr ::cordl_internals::to_const_pointer<::System::UnhandledExceptionEventHandler*> const& __get_UnhandledException() const;

  constexpr void __set_UnhandledException(::System::UnhandledExceptionEventHandler* value);

  constexpr ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>*& __get_FirstChanceException();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>*> const& __get_FirstChanceException() const;

  constexpr void __set_FirstChanceException(::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* value);

  constexpr ::System::Object*& __get__domain_manager();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__domain_manager() const;

  constexpr void __set__domain_manager(::System::Object* value);

  constexpr ::System::ResolveEventHandler*& __get_ReflectionOnlyAssemblyResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& __get_ReflectionOnlyAssemblyResolve() const;

  constexpr void __set_ReflectionOnlyAssemblyResolve(::System::ResolveEventHandler* value);

  constexpr ::System::Object*& __get__activation();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__activation() const;

  constexpr void __set__activation(::System::Object* value);

  constexpr ::System::Object*& __get__applicationIdentity();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__applicationIdentity() const;

  constexpr void __set__applicationIdentity(::System::Object* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_compatibility_switch();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_compatibility_switch() const;

  constexpr void __set_compatibility_switch(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF__process_guid(::StringW value);

  static inline ::StringW getStaticF__process_guid();

  static inline void setStaticF_type_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* getStaticF_type_resolve_in_progress();

  static inline void setStaticF_assembly_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* getStaticF_assembly_resolve_in_progress();

  static inline void setStaticF_assembly_resolve_in_progress_refonly(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* getStaticF_assembly_resolve_in_progress_refonly();

  /// @brief Method IsAppXModel addr 0x25f3d04 size 0x8 virtual false final false
  static inline bool IsAppXModel();

  static inline ::System::AppDomain* New_ctor();

  /// @brief Method .ctor addr 0x25f3d0c size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method getFriendlyName addr 0x25f3d14 size 0x4 virtual false final false
  inline ::StringW getFriendlyName();

  /// @brief Method getCurDomain addr 0x25f3d18 size 0x4 virtual false final false
  static inline ::System::AppDomain* getCurDomain();

  /// @brief Method get_CurrentDomain addr 0x25f3d1c size 0x4 virtual false final false
  static inline ::System::AppDomain* get_CurrentDomain();

  /// @brief Method GetAssemblies addr 0x25f3d20 size 0x8 virtual false final false
  inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetAssemblies(bool refOnly);

  /// @brief Method GetAssemblies addr 0x25f3d28 size 0x8 virtual true final true
  inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> GetAssemblies();

  /// @brief Method GetData addr 0x25f3d30 size 0x4 virtual true final true
  inline ::System::Object* GetData(::StringW name);

  /// @brief Method InitializeLifetimeService addr 0x25f3d34 size 0x8 virtual true final false
  inline ::System::Object* InitializeLifetimeService();

  /// @brief Method LoadAssembly addr 0x25f3d3c size 0x8 virtual false final false
  inline ::System::Reflection::Assembly* LoadAssembly(::StringW assemblyRef, ::System::Security::Policy::Evidence* securityEvidence, bool refOnly,
                                                      ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method Load addr 0x25f3d44 size 0x24 virtual true final true
  inline ::System::Reflection::Assembly* Load(::StringW assemblyString);

  /// @brief Method Load addr 0x25f3d68 size 0x110 virtual false final false
  inline ::System::Reflection::Assembly* Load(::StringW assemblyString, ::System::Security::Policy::Evidence* assemblySecurity, bool refonly, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method InternalSetDomainByID addr 0x25f3e78 size 0x4 virtual false final false
  static inline ::System::AppDomain* InternalSetDomainByID(int32_t domain_id);

  /// @brief Method InternalSetDomain addr 0x25f3e7c size 0x4 virtual false final false
  static inline ::System::AppDomain* InternalSetDomain(::System::AppDomain* context);

  /// @brief Method InternalPushDomainRefByID addr 0x25f3e80 size 0x4 virtual false final false
  static inline void InternalPushDomainRefByID(int32_t domain_id);

  /// @brief Method InternalPopDomainRef addr 0x25f3e84 size 0x4 virtual false final false
  static inline void InternalPopDomainRef();

  /// @brief Method InternalSetContext addr 0x25f3e88 size 0x4 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::Context* InternalSetContext(::System::Runtime::Remoting::Contexts::Context* context);

  /// @brief Method InternalGetContext addr 0x25f3e8c size 0x4 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::Context* InternalGetContext();

  /// @brief Method InternalGetDefaultContext addr 0x25f3e90 size 0x4 virtual false final false
  static inline ::System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext();

  /// @brief Method InternalGetProcessGuid addr 0x25f3e94 size 0x4 virtual false final false
  static inline ::StringW InternalGetProcessGuid(::StringW newguid);

  /// @brief Method InvokeInDomainByID addr 0x25f3e98 size 0x190 virtual false final false
  static inline ::System::Object* InvokeInDomainByID(int32_t domain_id, ::System::Reflection::MethodInfo* method, ::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetProcessGuid addr 0x25f4028 size 0x88 virtual false final false
  static inline ::StringW GetProcessGuid();

  /// @brief Method InternalIsFinalizingForUnload addr 0x25f40b0 size 0x4 virtual false final false
  static inline bool InternalIsFinalizingForUnload(int32_t domain_id);

  /// @brief Method IsFinalizingForUnload addr 0x25f40b4 size 0x14 virtual false final false
  inline bool IsFinalizingForUnload();

  /// @brief Method getDomainID addr 0x25f40c8 size 0x8 virtual false final false
  inline int32_t getDomainID();

  /// @brief Method ToString addr 0x25f40d0 size 0x4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method DoAssemblyLoad addr 0x25f40d4 size 0x98 virtual false final false
  inline void DoAssemblyLoad(::System::Reflection::Assembly* assembly);

  /// @brief Method DoAssemblyResolve addr 0x25f416c size 0x310 virtual false final false
  inline ::System::Reflection::Assembly* DoAssemblyResolve(::StringW name, ::System::Reflection::Assembly* requestingAssembly, bool refonly);

  /// @brief Method DoTypeResolve addr 0x25f447c size 0x2d0 virtual false final false
  inline ::System::Reflection::Assembly* DoTypeResolve(::StringW name);

  /// @brief Method DoDomainUnload addr 0x25f474c size 0x24 virtual false final false
  inline void DoDomainUnload();

  /// @brief Method GetMarshalledDomainObjRef addr 0x25f4770 size 0xd8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMarshalledDomainObjRef();

  /// @brief Method ProcessMessageInDomain addr 0x25f4848 size 0x130 virtual false final false
  inline void ProcessMessageInDomain(::ArrayW<uint8_t, ::Array<uint8_t>*> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg,
                                     ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> arrResponse, ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*> cadMrm);

  /// @brief Method add_DomainUnload addr 0x25f4978 size 0x98 virtual true final true
  inline void add_DomainUnload(::System::EventHandler* value);

  /// @brief Method remove_DomainUnload addr 0x25f4b84 size 0x98 virtual true final true
  inline void remove_DomainUnload(::System::EventHandler* value);

  /// @brief Method add_UnhandledException addr 0x25f4d8c size 0x98 virtual true final true
  inline void add_UnhandledException(::System::UnhandledExceptionEventHandler* value);

  /// @brief Method remove_UnhandledException addr 0x25f4e24 size 0x98 virtual true final true
  inline void remove_UnhandledException(::System::UnhandledExceptionEventHandler* value);

  // Ctor Parameters [CppParam { name: "", ty: "AppDomain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppDomain(AppDomain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppDomain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppDomain(AppDomain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppDomain();

public:
  /// @brief Field _mono_app_domain, offset: 0x18, size: 0x8, def value: None
  void* ____mono_app_domain;

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
static_assert(::cordl_internals::size_check_v<::System::AppDomain, 0xa0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AppDomain);
DEFINE_IL2CPP_ARG_TYPE(::System::AppDomain*, "System", "AppDomain");
