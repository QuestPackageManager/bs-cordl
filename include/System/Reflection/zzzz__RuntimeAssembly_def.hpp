#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeAssembly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeAssembly)
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly_ResolveEventHolder;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeAssembly);
// Dependencies System.IntPtr, System.Reflection.Assembly
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeAssembly
class CORDL_TYPE RuntimeAssembly : public ::System::Reflection::Assembly {
public:
  // Declarations
  __declspec(property(get = get_CodeBase)) ::StringW CodeBase;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  __declspec(property(get = get_Location)) ::StringW Location;

  __declspec(property(get = get_MonoAssembly)) ::System::IntPtr MonoAssembly;

  /// @brief Field _denied, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__denied, put = __cordl_internal_set__denied)) ::System::Object* _denied;

  /// @brief Field _evidence, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__evidence, put = __cordl_internal_set__evidence)) ::System::Object* _evidence;

  /// @brief Field _granted, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__granted, put = __cordl_internal_set__granted)) ::System::Object* _granted;

  /// @brief Field _minimum, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__minimum, put = __cordl_internal_set__minimum)) ::System::Object* _minimum;

  /// @brief Field _mono_assembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mono_assembly, put = __cordl_internal_set__mono_assembly)) ::System::IntPtr _mono_assembly;

  /// @brief Field _optional, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__optional, put = __cordl_internal_set__optional)) ::System::Object* _optional;

  /// @brief Field _refuse, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__refuse, put = __cordl_internal_set__refuse)) ::System::Object* _refuse;

  /// @brief Field assemblyName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyName, put = __cordl_internal_set_assemblyName)) ::StringW assemblyName;

  /// @brief Field fromByteArray, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_fromByteArray, put = __cordl_internal_set_fromByteArray)) bool fromByteArray;

  /// @brief Field resolve_event_holder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resolve_event_holder, put = __cordl_internal_set_resolve_event_holder)) ::System::Reflection::Assembly_ResolveEventHolder* resolve_event_holder;

  /// @brief Method Equals, addr 0x3d3c120, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetAotId, addr 0x3d3bedc, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetAotId();

  /// @brief Method GetAotIdInternal, addr 0x3d3bf34, size 0x4, virtual false, abstract: false, final false
  static inline bool GetAotIdInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> aotid);

  /// @brief Method GetCodeBase, addr 0x3d3bf48, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetCodeBase(::System::Reflection::Assembly* a, bool escaped);

  /// @brief Method GetCustomAttributes, addr 0x3d3c0a4, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3d3c03c, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetHashCode, addr 0x3d3c118, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetManifestResourceInternal, addr 0x3d3bfc8, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetManifestResourceInternal(::StringW name, ::ByRef<int32_t> size, ::ByRef<::System::Reflection::Module*> _cordl_module);

  /// @brief Method GetModule, addr 0x3d3bc20, size 0x128, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* GetModule(::StringW name);

  /// @brief Method GetModules, addr 0x3d3bd48, size 0x194, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModules(bool getResourceModules);

  /// @brief Method GetModulesInternal, addr 0x3d3c114, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> GetModulesInternal();

  /// @brief Method GetName, addr 0x3d3bb60, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::AssemblyName* GetName(bool copiedName);

  /// @brief Method GetObjectData, addr 0x3d3ba28, size 0x88, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetType, addr 0x3d3bb68, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Type* GetType(::StringW name, bool throwOnError, bool ignoreCase);

  /// @brief Method IsDefined, addr 0x3d3bfcc, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method LoadWithPartialNameInternal, addr 0x3d3bb38, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::System::Reflection::AssemblyName* an, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                   ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method LoadWithPartialNameInternal, addr 0x3d3bab0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Reflection::RuntimeAssembly* LoadWithPartialNameInternal(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                   ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  static inline ::System::Reflection::RuntimeAssembly* New_ctor();

  /// @brief Method ToString, addr 0x3d3c1c0, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Object* const& __cordl_internal_get__denied() const;

  constexpr ::System::Object*& __cordl_internal_get__denied();

  constexpr ::System::Object* const& __cordl_internal_get__evidence() const;

  constexpr ::System::Object*& __cordl_internal_get__evidence();

  constexpr ::System::Object* const& __cordl_internal_get__granted() const;

  constexpr ::System::Object*& __cordl_internal_get__granted();

  constexpr ::System::Object* const& __cordl_internal_get__minimum() const;

  constexpr ::System::Object*& __cordl_internal_get__minimum();

  constexpr ::System::IntPtr const& __cordl_internal_get__mono_assembly() const;

  constexpr ::System::IntPtr& __cordl_internal_get__mono_assembly();

  constexpr ::System::Object* const& __cordl_internal_get__optional() const;

  constexpr ::System::Object*& __cordl_internal_get__optional();

  constexpr ::System::Object* const& __cordl_internal_get__refuse() const;

  constexpr ::System::Object*& __cordl_internal_get__refuse();

  constexpr ::StringW const& __cordl_internal_get_assemblyName() const;

  constexpr ::StringW& __cordl_internal_get_assemblyName();

  constexpr bool const& __cordl_internal_get_fromByteArray() const;

  constexpr bool& __cordl_internal_get_fromByteArray();

  constexpr ::System::Reflection::Assembly_ResolveEventHolder* const& __cordl_internal_get_resolve_event_holder() const;

  constexpr ::System::Reflection::Assembly_ResolveEventHolder*& __cordl_internal_get_resolve_event_holder();

  constexpr void __cordl_internal_set__denied(::System::Object* value);

  constexpr void __cordl_internal_set__evidence(::System::Object* value);

  constexpr void __cordl_internal_set__granted(::System::Object* value);

  constexpr void __cordl_internal_set__minimum(::System::Object* value);

  constexpr void __cordl_internal_set__mono_assembly(::System::IntPtr value);

  constexpr void __cordl_internal_set__optional(::System::Object* value);

  constexpr void __cordl_internal_set__refuse(::System::Object* value);

  constexpr void __cordl_internal_set_assemblyName(::StringW value);

  constexpr void __cordl_internal_set_fromByteArray(bool value);

  constexpr void __cordl_internal_set_resolve_event_holder(::System::Reflection::Assembly_ResolveEventHolder* value);

  /// @brief Method .ctor, addr 0x3d3b9c4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeBase, addr 0x3d3bf50, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_CodeBase();

  /// @brief Method get_FullName, addr 0x3d3bf58, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_Location, addr 0x3d3bf64, size 0x64, virtual true, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_MonoAssembly, addr 0x3d3bf5c, size 0x8, virtual true, abstract: false, final false
  inline ::System::IntPtr get_MonoAssembly();

  /// @brief Method get_code_base, addr 0x3d3bf38, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW get_code_base(::System::Reflection::Assembly* a, bool escaped);

  /// @brief Method get_fullname, addr 0x3d3bf44, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_fullname(::System::Reflection::Assembly* a);

  /// @brief Method get_location, addr 0x3d3bf40, size 0x4, virtual false, abstract: false, final false
  inline ::StringW get_location();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAssembly(RuntimeAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAssembly(RuntimeAssembly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3520 };

  /// @brief Field _mono_assembly, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ____mono_assembly;

  /// @brief Field _evidence, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____evidence;

  /// @brief Field resolve_event_holder, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::Assembly_ResolveEventHolder* ___resolve_event_holder;

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

static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeAssembly, 0x60>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeAssembly*, "System.Reflection", "RuntimeAssembly");
