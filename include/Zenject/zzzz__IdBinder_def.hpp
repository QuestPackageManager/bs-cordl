#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdBinder)
namespace Zenject {
class BindInfo;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10920))
// CS Name: ::Zenject::IdBinder*
class CORDL_TYPE IdBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__bindInfo, put = __set__bindInfo))::Zenject::BindInfo* _bindInfo;

  constexpr ::Zenject::BindInfo*& __get__bindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& __get__bindInfo() const;

  constexpr void __set__bindInfo(::Zenject::BindInfo* value);

  static inline ::Zenject::IdBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor addr 0x2eda128 size 0x28 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithId addr 0x2eda150 size 0x101c virtual false final false
  inline void WithId(::System::Object* identifier);

  // Ctor Parameters [CppParam { name: "", ty: "IdBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdBinder(IdBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdBinder(IdBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdBinder();

public:
  /// @brief Field _bindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindInfo* ____bindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IdBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::IdBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IdBinder*, "Zenject", "IdBinder");
