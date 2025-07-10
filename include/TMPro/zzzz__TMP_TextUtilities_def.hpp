#pragma once
// IWYU pragma private; include "TMPro/TMP_TextUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextUtilities)
namespace TMPro {
struct CaretPosition;
}
namespace TMPro {
struct TMP_TextUtilities_LineSegment;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TMPro {
class TMP_TextUtilities;
}
namespace TMPro {
struct TMP_TextUtilities_LineSegment;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextUtilities);
MARK_VAL_T(::TMPro::TMP_TextUtilities_LineSegment);
// Dependencies UnityEngine.Vector3
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_TextUtilities/LineSegment
struct CORDL_TYPE TMP_TextUtilities_LineSegment {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x480a360, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextUtilities_LineSegment();

  // Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None
  // }]
  constexpr TMP_TextUtilities_LineSegment(::UnityEngine::Vector3 Point1, ::UnityEngine::Vector3 Point2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Point1, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 Point1;

  /// @brief Field Point2, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 Point2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_TextUtilities_LineSegment, Point1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextUtilities_LineSegment, Point2) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextUtilities_LineSegment, 0x18>, "Size mismatch!");

} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_TextUtilities
class CORDL_TYPE TMP_TextUtilities : public ::System::Object {
public:
  // Declarations
  using LineSegment = ::TMPro::TMP_TextUtilities_LineSegment;

  /// @brief Field m_rectWorldCorners, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_rectWorldCorners, put = setStaticF_m_rectWorldCorners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> m_rectWorldCorners;

  /// @brief Method DistanceToLine, addr 0x4808418, size 0xc8, virtual false, abstract: false, final false
  static inline float_t DistanceToLine(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 point);

  /// @brief Method FindIntersectingCharacter, addr 0x48085fc, size 0x208, virtual false, abstract: false, final false
  static inline int32_t FindIntersectingCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, bool visibleOnly);

  /// @brief Method FindIntersectingLine, addr 0x48091d8, size 0x158, virtual false, abstract: false, final false
  static inline int32_t FindIntersectingLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method FindIntersectingLink, addr 0x4809330, size 0x340, virtual false, abstract: false, final false
  static inline int32_t FindIntersectingLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method FindIntersectingWord, addr 0x4808804, size 0x410, virtual false, abstract: false, final false
  static inline int32_t FindIntersectingWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method FindNearestCharacter, addr 0x4807640, size 0x328, virtual false, abstract: false, final false
  static inline int32_t FindNearestCharacter(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, bool visibleOnly);

  /// @brief Method FindNearestCharacterOnLine, addr 0x4807fec, size 0x36c, virtual false, abstract: false, final false
  static inline int32_t FindNearestCharacterOnLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, int32_t line, ::UnityEngine::Camera* camera, bool visibleOnly);

  /// @brief Method FindNearestLine, addr 0x4807e6c, size 0x180, virtual false, abstract: false, final false
  static inline int32_t FindNearestLine(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method FindNearestLink, addr 0x4809670, size 0x714, virtual false, abstract: false, final false
  static inline int32_t FindNearestLink(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method FindNearestWord, addr 0x4808c14, size 0x5c4, virtual false, abstract: false, final false
  static inline int32_t FindNearestWord(::TMPro::TMP_Text* text, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method GetCursorIndexFromPosition, addr 0x48074dc, size 0x164, virtual false, abstract: false, final false
  static inline int32_t GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method GetCursorIndexFromPosition, addr 0x4807c8c, size 0x1e0, virtual false, abstract: false, final false
  static inline int32_t GetCursorIndexFromPosition(::TMPro::TMP_Text* textComponent, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera, ::ByRef<::TMPro::CaretPosition> cursor);

  /// @brief Method GetHashCode, addr 0x480a050, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::StringW s);

  /// @brief Method GetSimpleHashCode, addr 0x4801cbc, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetSimpleHashCode(::StringW s);

  /// @brief Method GetSimpleHashCodeLowercase, addr 0x480a10c, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t GetSimpleHashCodeLowercase(::StringW s);

  /// @brief Method HexToInt, addr 0x480a1c8, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t HexToInt(char16_t hex);

  /// @brief Method IntersectLinePlane, addr 0x4809d84, size 0x170, virtual false, abstract: false, final false
  static inline bool IntersectLinePlane(::TMPro::TMP_TextUtilities_LineSegment line, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, ::ByRef<::UnityEngine::Vector3> intersectingPoint);

  /// @brief Method IsIntersectingRectTransform, addr 0x48084e0, size 0x11c, virtual false, abstract: false, final false
  static inline bool IsIntersectingRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Vector3 position, ::UnityEngine::Camera* camera);

  /// @brief Method PointIntersectRectangle, addr 0x4808358, size 0xc0, virtual false, abstract: false, final false
  static inline bool PointIntersectRectangle(::UnityEngine::Vector3 m, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Vector3 d);

  /// @brief Method ScreenPointToWorldPointInRectangle, addr 0x4807968, size 0x324, virtual false, abstract: false, final false
  static inline bool ScreenPointToWorldPointInRectangle(::UnityEngine::Transform* transform, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam,
                                                        ::ByRef<::UnityEngine::Vector3> worldPoint);

  /// @brief Method StringHexToInt, addr 0x480a1f4, size 0x104, virtual false, abstract: false, final false
  static inline int32_t StringHexToInt(::StringW s);

  /// @brief Method ToLowerFast, addr 0x4809ef4, size 0x74, virtual false, abstract: false, final false
  static inline char16_t ToLowerFast(char16_t c);

  /// @brief Method ToUpperASCIIFast, addr 0x4809fdc, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ToUpperASCIIFast(uint32_t c);

  /// @brief Method ToUpperFast, addr 0x4809f68, size 0x74, virtual false, abstract: false, final false
  static inline char16_t ToUpperFast(char16_t c);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_m_rectWorldCorners();

  static inline void setStaticF_m_rectWorldCorners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextUtilities(TMP_TextUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextUtilities(TMP_TextUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14579 };

  /// @brief Field k_lookupStringL offset 0xffffffff size 0x8
  static constexpr ::ConstString k_lookupStringL{ u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-" };

  /// @brief Field k_lookupStringU offset 0xffffffff size 0x8
  static constexpr ::ConstString k_lookupStringU{ u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextUtilities, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextUtilities*, "TMPro", "TMP_TextUtilities");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextUtilities_LineSegment, "TMPro", "TMP_TextUtilities/LineSegment");
