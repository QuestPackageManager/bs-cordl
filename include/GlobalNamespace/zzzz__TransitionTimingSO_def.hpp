#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransitionTimingSO)
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class TransitionTimingSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransitionTimingSO);
// Type: ::TransitionTimingSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(16090))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5463))
// CS Name: ::TransitionTimingSO*
class CORDL_TYPE TransitionTimingSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _easeType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType, put = __cordl_internal_set__easeType))::GlobalNamespace::EaseType _easeType;

  /// @brief Field _easeDuration, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__easeDuration, put = __cordl_internal_set__easeDuration)) float_t _easeDuration;

  __declspec(property(get = get_easeType))::GlobalNamespace::EaseType easeType;

  __declspec(property(get = get_easeDuration)) float_t easeDuration;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType() const;

  constexpr void __cordl_internal_set__easeType(::GlobalNamespace::EaseType value);

  constexpr float_t& __cordl_internal_get__easeDuration();

  constexpr float_t const& __cordl_internal_get__easeDuration() const;

  constexpr void __cordl_internal_set__easeDuration(float_t value);

  /// @brief Method get_easeType, addr 0x228007c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EaseType get_easeType();

  /// @brief Method get_easeDuration, addr 0x2280084, size 0x8, virtual false, abstract: false, final false
  inline float_t get_easeDuration();

  static inline ::GlobalNamespace::TransitionTimingSO* New_ctor();

  /// @brief Method .ctor, addr 0x228008c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TransitionTimingSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionTimingSO(TransitionTimingSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionTimingSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionTimingSO(TransitionTimingSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionTimingSO();

public:
  /// @brief Field _easeType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType;

  /// @brief Field _easeDuration, offset: 0x1c, size: 0x4, def value: None
  float_t ____easeDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransitionTimingSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionTimingSO, ____easeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionTimingSO, ____easeDuration) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransitionTimingSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransitionTimingSO*, "", "TransitionTimingSO");
