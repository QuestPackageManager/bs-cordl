#pragma once
// IWYU pragma private; include "Zenject/IInitializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitializable)
// Forward declare root types
namespace Zenject {
class IInitializable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IInitializable);
// Type: Zenject::IInitializable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::IInitializable*
class CORDL_TYPE IInitializable {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  // Ctor Parameters [CppParam { name: "", ty: "IInitializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInitializable(IInitializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInitializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializable(IInitializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18294 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IInitializable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInitializable*, "Zenject", "IInitializable");
