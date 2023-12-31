#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FadeOutInstantly)
namespace GlobalNamespace {
class FadeInOutController;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutInstantly;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeOutInstantly);
// Type: ::FadeOutInstantly
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15284))
// CS Name: ::FadeOutInstantly*
class CORDL_TYPE FadeOutInstantly : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fadeInOut, offset 0x18, size 0x8
  __declspec(property(get = __get__fadeInOut, put = __set__fadeInOut))::GlobalNamespace::FadeInOutController* _fadeInOut;

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOut();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOut() const;

  constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController* value);

  /// @brief Method Start, addr 0x2807840, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::FadeOutInstantly* New_ctor();

  /// @brief Method .ctor, addr 0x280785c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FadeOutInstantly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeOutInstantly(FadeOutInstantly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeOutInstantly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeOutInstantly(FadeOutInstantly const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeOutInstantly();

public:
  /// @brief Field _fadeInOut, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeOutInstantly, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeOutInstantly, ____fadeInOut) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeOutInstantly);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutInstantly*, "", "FadeOutInstantly");
