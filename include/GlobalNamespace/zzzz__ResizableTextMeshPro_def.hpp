#pragma once
// IWYU pragma private; include "GlobalNamespace/ResizableTextMeshPro.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ResizableTextMeshPro)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class ResizableTextMeshPro;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResizableTextMeshPro);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResizableTextMeshPro
class CORDL_TYPE ResizableTextMeshPro : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rectTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _textExtraSpace, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__textExtraSpace, put = __cordl_internal_set__textExtraSpace)) float_t _textExtraSpace;

  /// @brief Field _textMeshPro, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textMeshPro, put = __cordl_internal_set__textMeshPro)) ::UnityW<::TMPro::TMP_Text> _textMeshPro;

  /// @brief Method HandleTextDidChange, addr 0x570d2c8, size 0x94, virtual false, abstract: false, final false
  inline void HandleTextDidChange(::UnityEngine::Object* textMeshPro);

  static inline ::GlobalNamespace::ResizableTextMeshPro* New_ctor();

  /// @brief Method OnDestroy, addr 0x570d1f0, size 0xd8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x570d0b8, size 0xd8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x570d190, size 0x60, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr float_t const& __cordl_internal_get__textExtraSpace() const;

  constexpr float_t& __cordl_internal_get__textExtraSpace();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__textMeshPro() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__textMeshPro();

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__textExtraSpace(float_t value);

  constexpr void __cordl_internal_set__textMeshPro(::UnityW<::TMPro::TMP_Text> value);

  /// @brief Method .ctor, addr 0x570d35c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResizableTextMeshPro();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResizableTextMeshPro", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResizableTextMeshPro(ResizableTextMeshPro&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResizableTextMeshPro", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResizableTextMeshPro(ResizableTextMeshPro const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6724 };

  /// @brief Field _textMeshPro, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____textMeshPro;

  /// @brief Field _rectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _textExtraSpace, offset: 0x30, size: 0x4, def value: None
  float_t ____textExtraSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResizableTextMeshPro, ____textMeshPro) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResizableTextMeshPro, ____rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResizableTextMeshPro, ____textExtraSpace) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResizableTextMeshPro, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResizableTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResizableTextMeshPro*, "", "ResizableTextMeshPro");
