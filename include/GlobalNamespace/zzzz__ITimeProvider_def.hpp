#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITimeProvider)
// Forward declare root types
namespace GlobalNamespace {
class ITimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ITimeProvider);
// Type: ::ITimeProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5385))
// CS Name: ::ITimeProvider*
class CORDL_TYPE ITimeProvider {
public:
  // Declarations
  __declspec(property(get = get_time)) int64_t time;

  /// @brief Method get_time, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_time();

  // Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITimeProvider(ITimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimeProvider(ITimeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ITimeProvider*, "", "ITimeProvider");
