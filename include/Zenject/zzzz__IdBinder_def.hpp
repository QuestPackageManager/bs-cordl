#pragma once
// IWYU pragma private; include "Zenject/IdBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdBinder)
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class IdBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IdBinder);
// Type: Zenject::IdBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::IdBinder*
class CORDL_TYPE IdBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindInfo, put = __cordl_internal_set__bindInfo))::Zenject::BindInfo* _bindInfo;

  static inline ::Zenject::IdBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithId, addr 0x367113c, size 0x101c, virtual false, abstract: false, final false
  inline void WithId(::System::Object* identifier);

  constexpr ::Zenject::BindInfo*& __cordl_internal_get__bindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& __cordl_internal_get__bindInfo() const;

  constexpr void __cordl_internal_set__bindInfo(::Zenject::BindInfo* value);

  /// @brief Method .ctor, addr 0x3671114, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdBinder(IdBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdBinder(IdBinder const&) = delete;

  /// @brief Field _bindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindInfo* ____bindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IdBinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::IdBinder, ____bindInfo) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::IdBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IdBinder*, "Zenject", "IdBinder");
