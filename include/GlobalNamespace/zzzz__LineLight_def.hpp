#pragma once
// IWYU pragma private; include "GlobalNamespace/LineLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(LineLight)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LineLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LineLight);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LineLight
class CORDL_TYPE LineLight : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _lineLights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lineLights, put = setStaticF__lineLights)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LineLight>>* _lineLights;

  /// @brief Field _p0, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__p0, put = __cordl_internal_set__p0)) ::UnityEngine::Vector3 _p0;

  /// @brief Field _p1, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__p1, put = __cordl_internal_set__p1)) ::UnityEngine::Vector3 _p1;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_p0)) ::UnityEngine::Vector3 p0;

  __declspec(property(get = get_p1)) ::UnityEngine::Vector3 p1;

  static inline ::GlobalNamespace::LineLight* New_ctor();

  /// @brief Method OnDisable, addr 0x56bd33c, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrawGizmos, addr 0x56bd3c4, size 0x88, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  /// @brief Method OnEnable, addr 0x56bd268, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__p0() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__p0();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__p1() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__p1();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__p0(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__p1(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x56bd44c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LineLight>>* getStaticF__lineLights();

  /// @brief Method get_color, addr 0x56bd200, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_lineLights, addr 0x56bd20c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LineLight>>* get_lineLights();

  /// @brief Method get_p0, addr 0x56bd1e8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_p0();

  /// @brief Method get_p1, addr 0x56bd1f4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_p1();

  static inline void setStaticF__lineLights(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LineLight>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineLight();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LineLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineLight(LineLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineLight(LineLight const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19753 };

  /// @brief Field _p0, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____p0;

  /// @brief Field _p1, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____p1;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LineLight, ____p0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLight, ____p1) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLight, ____color) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LineLight, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LineLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineLight*, "", "LineLight");
