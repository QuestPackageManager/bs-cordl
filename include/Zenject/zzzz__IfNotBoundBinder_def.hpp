#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IfNotBoundBinder)
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class IfNotBoundBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IfNotBoundBinder);
// Type: Zenject::IfNotBoundBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10922))
// CS Name: ::Zenject::IfNotBoundBinder*
class CORDL_TYPE IfNotBoundBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field <BindInfo>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__BindInfo_k__BackingField, put = __set__BindInfo_k__BackingField))::Zenject::BindInfo* _BindInfo_k__BackingField;

  __declspec(property(get = get_BindInfo, put = set_BindInfo))::Zenject::BindInfo* BindInfo;

  constexpr ::Zenject::BindInfo*& __get__BindInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& __get__BindInfo_k__BackingField() const;

  constexpr void __set__BindInfo_k__BackingField(::Zenject::BindInfo* value);

  static inline ::Zenject::IfNotBoundBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor, addr 0x2edb198, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method get_BindInfo, addr 0x2edb1c0, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::BindInfo* get_BindInfo();

  /// @brief Method set_BindInfo, addr 0x2edb1c8, size 0x8, virtual false, abstract: false, final false
  inline void set_BindInfo(::Zenject::BindInfo* value);

  /// @brief Method IfNotBound, addr 0x2edb1d0, size 0x20, virtual false, abstract: false, final false
  inline void IfNotBound();

  // Ctor Parameters [CppParam { name: "", ty: "IfNotBoundBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IfNotBoundBinder(IfNotBoundBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IfNotBoundBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IfNotBoundBinder(IfNotBoundBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IfNotBoundBinder();

public:
  /// @brief Field <BindInfo>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindInfo* ____BindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IfNotBoundBinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::IfNotBoundBinder, ____BindInfo_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::IfNotBoundBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IfNotBoundBinder*, "Zenject", "IfNotBoundBinder");
