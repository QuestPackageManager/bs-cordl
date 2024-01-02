#pragma once
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
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LineLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LineLight);
// Type: ::LineLight
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14560))
// CS Name: ::LineLight*
class CORDL_TYPE LineLight : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _p0, offset 0x18, size 0xc
  __declspec(property(get = __get__p0, put = __set__p0))::UnityEngine::Vector3 _p0;

  /// @brief Field _p1, offset 0x24, size 0xc
  __declspec(property(get = __get__p1, put = __set__p1))::UnityEngine::Vector3 _p1;

  /// @brief Field _color, offset 0x30, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _lineLights, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lineLights, put = setStaticF__lineLights))::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* _lineLights;

  __declspec(property(get = get_p0))::UnityEngine::Vector3 p0;

  __declspec(property(get = get_p1))::UnityEngine::Vector3 p1;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Vector3& __get__p0();

  constexpr ::UnityEngine::Vector3 const& __get__p0() const;

  constexpr void __set__p0(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__p1();

  constexpr ::UnityEngine::Vector3 const& __get__p1() const;

  constexpr void __set__p1(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  static inline void setStaticF__lineLights(::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* value);

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* getStaticF__lineLights();

  /// @brief Method get_p0, addr 0x2114128, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_p0();

  /// @brief Method get_p1, addr 0x2114134, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_p1();

  /// @brief Method get_color, addr 0x2114140, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_lineLights, addr 0x211414c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* get_lineLights();

  /// @brief Method OnEnable, addr 0x21141a4, size 0xd0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2114274, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDrawGizmos, addr 0x21142f4, size 0x88, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  static inline ::GlobalNamespace::LineLight* New_ctor();

  /// @brief Method .ctor, addr 0x211437c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LineLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineLight(LineLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineLight(LineLight const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineLight();

public:
  /// @brief Field _p0, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____p0;

  /// @brief Field _p1, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____p1;

  /// @brief Field _color, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LineLight, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLight, ____p0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLight, ____p1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LineLight, ____color) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LineLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineLight*, "", "LineLight");
