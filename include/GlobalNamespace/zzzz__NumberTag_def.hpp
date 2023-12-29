#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NumberTag)
// Forward declare root types
namespace GlobalNamespace {
class NumberTag;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NumberTag);
// Type: ::NumberTag
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13877))
// CS Name: ::NumberTag*
class CORDL_TYPE NumberTag : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field number, offset 0x18, size 0x4
  __declspec(property(get = __get_number, put = __set_number)) int32_t number;

  constexpr int32_t& __get_number();

  constexpr int32_t const& __get_number() const;

  constexpr void __set_number(int32_t value);

  static inline ::GlobalNamespace::NumberTag* New_ctor();

  /// @brief Method .ctor addr 0x1f977fc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NumberTag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumberTag(NumberTag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumberTag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumberTag(NumberTag const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumberTag();

public:
  /// @brief Field number, offset: 0x18, size: 0x4, def value: None
  int32_t ___number;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NumberTag, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NumberTag, ___number) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NumberTag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NumberTag*, "", "NumberTag");
