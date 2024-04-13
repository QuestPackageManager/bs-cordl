#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Type_def.hpp"
CORDL_MODULE_EXPORT(TypeInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class IReflectableType;
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
// Type: System.Reflection::TypeInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::TypeInfo*
class CORDL_TYPE TypeInfo : public ::System::Type {
public:
  // Declarations
  __declspec(property(get = get_ImplementedInterfaces))::System::Collections::Generic::IEnumerable_1<::System::Type*>* ImplementedInterfaces;

  /// @brief Convert operator to "::System::Reflection::IReflectableType"
  constexpr operator ::System::Reflection::IReflectableType*() noexcept;

  static inline ::System::Reflection::TypeInfo* New_ctor();

  /// @brief Method System.Reflection.IReflectableType.GetTypeInfo, addr 0x276d448, size 0x4, virtual true, abstract: false, final true
  inline ::System::Reflection::TypeInfo* System_Reflection_IReflectableType_GetTypeInfo();

  /// @brief Method .ctor, addr 0x276cd80, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ImplementedInterfaces, addr 0x276d44c, size 0x10, virtual true, abstract: false, final false
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

  /// @brief Field DeclaredOnlyLookup value: static_cast<int32_t>(0x3e)
  static ::System::Reflection::BindingFlags const DeclaredOnlyLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::TypeInfo, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TypeInfo*, "System.Reflection", "TypeInfo");
