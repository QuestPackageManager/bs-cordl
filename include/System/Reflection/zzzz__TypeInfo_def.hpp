#pragma once
// IWYU pragma private; include "System/Reflection/TypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__IReflectableType_def.hpp"
#include "System/zzzz__Type_def.hpp"
CORDL_MODULE_EXPORT(TypeInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class TypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::TypeInfo);
// Dependencies System.Reflection.BindingFlags, System.Reflection.IReflectableType, System.Type
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.TypeInfo
class CORDL_TYPE TypeInfo : public ::System::Type {
public:
  // Declarations
  __declspec(property(get = get_ImplementedInterfaces)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ImplementedInterfaces;

  /// @brief Convert operator to "::System::Reflection::IReflectableType"
  constexpr operator ::System::Reflection::IReflectableType*() noexcept;

  static inline ::System::Reflection::TypeInfo* New_ctor();

  /// @brief Method System.Reflection.IReflectableType.GetTypeInfo, addr 0x3d27838, size 0x4, virtual true, abstract: false, final true
  inline ::System::Reflection::TypeInfo* System_Reflection_IReflectableType_GetTypeInfo();

  /// @brief Method .ctor, addr 0x3d27148, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ImplementedInterfaces, addr 0x3d2783c, size 0x10, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ImplementedInterfaces();

  /// @brief Convert to "::System::Reflection::IReflectableType"
  constexpr ::System::Reflection::IReflectableType* i___System__Reflection__IReflectableType() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeInfo(TypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeInfo(TypeInfo const&) = delete;

  /// @brief Field DeclaredOnlyLookup value: I32(62)
  static ::System::Reflection::BindingFlags const DeclaredOnlyLookup;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeInfo, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeInfo*, "System.Reflection", "TypeInfo");
