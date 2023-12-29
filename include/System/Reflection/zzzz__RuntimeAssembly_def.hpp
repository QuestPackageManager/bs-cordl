#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeAssembly)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Reflection {
class Module;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Reflection {
class AssemblyName;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeAssembly);
// Type: System.Reflection::RuntimeAssembly
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601)), TypeDefinitionIndex(TypeDefinitionIndex(3506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3512))
// CS Name: ::System.Reflection::RuntimeAssembly*
class CORDL_TYPE RuntimeAssembly : public ::System::Reflection::Assembly {
public:
  // Declarations
  /// @brief Field _mono_assembly, offset 0x10, size 0x8
  __declspec(property(get = __get__mono_assembly, put = __set__mono_assembly)) void* _mono_assembly;

  /// @brief Field _evidence, offset 0x18, size 0x8
  __declspec(property(get = __get__evidence, put = __set__evidence))::System::Object* _evidence;

  /// @brief Field resolve_event_holder, offset 0x20, size 0x8
  __declspec(property(get = __get_resolve_event_holder, put = __set_resolve_event_holder))::System::Reflection::__Assembly__ResolveEventHolder* resolve_event_holder;

  /// @brief Field _minimum, offset 0x28, size 0x8
  __declspec(property(get = __get__minimum, put = __set__minimum))::System::Object* _minimum;

  /// @brief Field _optional, offset 0x30, size 0x8
  __declspec(property(get = __get__optional, put = __set__optional))::System::Object* _optional;

  /// @brief Field _refuse, offset 0x38, size 0x8
  __declspec(property(get = __get__refuse, put = __set__refuse))::System::Object* _refuse;

  /// @brief Field _granted, offset 0x40, size 0x8
  __declspec(property(get = __get__granted, put = __set__granted))::System::Object* _granted;

  /// @brief Field _denied, offset 0x48, size 0x8
  __declspec(property(get = __get__denied, put = __set__denied))::System::Object* _denied;

  /// @brief Field fromByteArray, offset 0x50, size 0x1
  __declspec(property(get = __get_fromByteArray, put = __set_fromByteArray)) bool fromByteArray;

  /// @brief Field assemblyName, offset 0x58, size 0x8
  __declspec(property(get = __get_assemblyName, put = __set_assemblyName))::StringW assemblyName;

  __declspec(property(get = get_CodeBase))::StringW CodeBase;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_MonoAssembly)) void* MonoAssembly;

  constexpr void*& __get__mono_assembly();

  constexpr void* const& __get__mono_assembly() const;

  constexpr void __set__mono_assembly(void* value);

  constexpr ::System::Object*& __get__evidence();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__evidence() const;

  constexpr void __set__evidence(::System::Object* value);

  constexpr ::System::Reflection::__Assembly__ResolveEventHolder*& __get_resolve_event_holder();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__Assembly__ResolveEventHolder*> const& __get_resolve_event_holder() const;

  constexpr void __set_resolve_event_holder(::System::Reflection::__Assembly__ResolveEventHolder* value);

  constexpr ::System::Object*& __get__minimum();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__minimum() const;

  constexpr void __set__minimum(::System::Object* value);

  constexpr ::System::Object*& __get__optional();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__optional() const;

  constexpr void __set__optional(::System::Object* value);

  constexpr ::System::Object*& __get__refuse();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__refuse() const;

  constexpr void __set__refuse(::System::Object* value);

  constexpr ::System::Object*& __get__granted();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__granted() const;

  constexpr void __set__granted(::System::Object* value);

  constexpr ::System::Object*& __get__denied();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__denied() const;

  constexpr void __set__denied(::System::Object* value);

  constexpr bool& __get_fromByteArray();

  constexpr bool const& __get_fromByteArray() const;

  constexpr void __set_fromByteArray(bool value);

  constexpr ::StringW& __get_assemblyName();

  constexpr ::StringW const& __get_assemblyName() const;

  constexpr void __set_assemblyName(::StringW value);

  static inline ::System::Reflection::RuntimeAssembly* New_ctor();

  /// @brief Method .ctor addr 0x23982cc size 0x6c virtual false final false
  inline void _ctor();

  /// @brief Method GetObjectData addr 0x2398338 size 0x8c virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method LoadWithPartialNameInternal addr 0x23983c4 size 0x88 virtual false final false
  static inline ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                   ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method LoadWithPartialNameInternal addr 0x239844c size 0x28 virtual false final false
  static inline ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::System::Reflection::AssemblyName* an, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                   ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetName addr 0x2398474 size 0x8 virtual true final false
  inline ::System::Reflection::AssemblyName* GetName(bool copiedName);

  /// @brief Method GetType addr 0x239847c size 0xc4 virtual true final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method GetModule addr 0x2398540 size 0x130 virtual true final false
  inline ::System::Reflection::Module* GetModule(::StringW name);

  /// @brief Method GetModules addr 0x2398670 size 0x194 virtual true final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModules(bool getResourceModules);

  /// @brief Method GetAotId addr 0x2398804 size 0x58 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAotId();

  /// @brief Method get_code_base addr 0x2398860 size 0x8 virtual false final false
  static inline ::StringW get_code_base(::System::Reflection::Assembly* a, bool escaped);

  /// @brief Method get_fullname addr 0x2398868 size 0x4 virtual false final false
  static inline ::StringW get_fullname(::System::Reflection::Assembly* a);

  /// @brief Method GetAotIdInternal addr 0x239885c size 0x4 virtual false final false
  static inline bool GetAotIdInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> aotid);

  /// @brief Method GetCodeBase addr 0x239886c size 0x8 virtual false final false
  static inline ::StringW GetCodeBase(::System::Reflection::Assembly* a, bool escaped);

  /// @brief Method get_CodeBase addr 0x2398874 size 0x8 virtual true final false
  inline ::StringW get_CodeBase();

  /// @brief Method get_FullName addr 0x239887c size 0x4 virtual true final false
  inline ::StringW get_FullName();

  /// @brief Method get_MonoAssembly addr 0x2398880 size 0x8 virtual true final false
  inline void* get_MonoAssembly();

  /// @brief Method GetManifestResourceInternal addr 0x2398888 size 0x4 virtual false final false
  inline void* GetManifestResourceInternal(::StringW name, ByRef<int32_t> size, ByRef<::System::Reflection::Module*> module);

  /// @brief Method IsDefined addr 0x239888c size 0x70 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes addr 0x23988fc size 0x68 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x2398964 size 0x70 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetModulesInternal addr 0x23989d4 size 0x4 virtual true final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModulesInternal();

  /// @brief Method GetHashCode addr 0x23989d8 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x23989e0 size 0xa0 virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method ToString addr 0x2398a80 size 0x2c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAssembly(RuntimeAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAssembly(RuntimeAssembly const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAssembly();

public:
  /// @brief Field _mono_assembly, offset: 0x10, size: 0x8, def value: None
  void* ____mono_assembly;

  /// @brief Field _evidence, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____evidence;

  /// @brief Field resolve_event_holder, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::__Assembly__ResolveEventHolder* ___resolve_event_holder;

  /// @brief Field _minimum, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____minimum;

  /// @brief Field _optional, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____optional;

  /// @brief Field _refuse, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____refuse;

  /// @brief Field _granted, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____granted;

  /// @brief Field _denied, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____denied;

  /// @brief Field fromByteArray, offset: 0x50, size: 0x1, def value: None
  bool ___fromByteArray;

  /// @brief Field assemblyName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___assemblyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeAssembly, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____mono_assembly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____evidence) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ___resolve_event_holder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____minimum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____optional) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____refuse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____granted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ____denied) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ___fromByteArray) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeAssembly, ___assemblyName) == 0x58, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeAssembly*, "System.Reflection", "RuntimeAssembly");
