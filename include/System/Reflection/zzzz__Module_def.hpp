#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Module)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::InteropServices {
class _Module;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Reflection {
class TypeFilter;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Reflection {
class Module;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Module);
// Type: System.Reflection::Module
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3454))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3476))
// CS Name: ::System.Reflection::Module*
class CORDL_TYPE Module : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilterTypeName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterTypeName, put = setStaticF_FilterTypeName))::System::Reflection::TypeFilter* FilterTypeName;

  /// @brief Field FilterTypeNameIgnoreCase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterTypeNameIgnoreCase, put = setStaticF_FilterTypeNameIgnoreCase))::System::Reflection::TypeFilter* FilterTypeNameIgnoreCase;

  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_ModuleVersionId))::System::Guid ModuleVersionId;

  __declspec(property(get = get_ScopeName))::StringW ScopeName;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_Module"
  constexpr operator ::System::Runtime::InteropServices::_Module*() noexcept;

  static inline void setStaticF_FilterTypeName(::System::Reflection::TypeFilter* value);

  static inline ::System::Reflection::TypeFilter* getStaticF_FilterTypeName();

  static inline void setStaticF_FilterTypeNameIgnoreCase(::System::Reflection::TypeFilter* value);

  static inline ::System::Reflection::TypeFilter* getStaticF_FilterTypeNameIgnoreCase();

  static inline ::System::Reflection::Module* New_ctor();

  /// @brief Method .ctor addr 0x238f0a8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Assembly addr 0x238f0b0 size 0x28 virtual true final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_ModuleVersionId addr 0x238f0d8 size 0x28 virtual true final false
  inline ::System::Guid get_ModuleVersionId();

  /// @brief Method get_ScopeName addr 0x238f100 size 0x28 virtual true final false
  inline ::StringW get_ScopeName();

  /// @brief Method IsResource addr 0x238f128 size 0x28 virtual true final false
  inline bool IsResource();

  /// @brief Method IsDefined addr 0x238f150 size 0x28 virtual true final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes addr 0x238f178 size 0x28 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes addr 0x238f1a0 size 0x28 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetObjectData addr 0x238f1c8 size 0x28 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Equals addr 0x238f1f0 size 0x8 virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode addr 0x238f1f8 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x238f200 size 0x2c virtual false final false
  static inline bool op_Equality(::System::Reflection::Module* left, ::System::Reflection::Module* right);

  /// @brief Method ToString addr 0x238f22c size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method FilterTypeNameImpl addr 0x238f238 size 0x134 virtual false final false
  static inline bool FilterTypeNameImpl(::System::Type* cls, ::System::Object* filterCriteria);

  /// @brief Method FilterTypeNameIgnoreCaseImpl addr 0x238f36c size 0x164 virtual false final false
  static inline bool FilterTypeNameIgnoreCaseImpl(::System::Type* cls, ::System::Object* filterCriteria);

  /// @brief Method GetModuleVersionId addr 0x238f4d0 size 0x40 virtual true final false
  inline ::System::Guid GetModuleVersionId();

  // Ctor Parameters [CppParam { name: "", ty: "Module", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Module(Module&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Module", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Module(Module const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Module();

public:
  /// @brief Field DefaultLookup value: static_cast<int32_t>(0x1c)
  static ::System::Reflection::BindingFlags const DefaultLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Module, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Module);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Module*, "System.Reflection", "Module");
