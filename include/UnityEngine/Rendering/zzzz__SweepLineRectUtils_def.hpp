#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SweepLineRectUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SweepLineRectUtils)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
struct SweepLineRectUtils_ActiveComparer;
}
namespace UnityEngine::Rendering {
struct SweepLineRectUtils_EventComparer;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SweepLineRectUtils;
}
namespace UnityEngine::Rendering {
struct SweepLineRectUtils_ActiveComparer;
}
namespace UnityEngine::Rendering {
struct SweepLineRectUtils_EventComparer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SweepLineRectUtils*);
MARK_VAL_T(::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer);
MARK_VAL_T(::UnityEngine::Rendering::SweepLineRectUtils_EventComparer);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SweepLineRectUtils*, "UnityEngine.Rendering", "SweepLineRectUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer, "UnityEngine.Rendering", "SweepLineRectUtils/ActiveComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SweepLineRectUtils_EventComparer, "UnityEngine.Rendering", "SweepLineRectUtils/EventComparer");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SweepLineRectUtils/EventComparer
#pragma pack(push, 0)
struct CORDL_TYPE SweepLineRectUtils_EventComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>*();

  /// @brief Method Compare, addr 0x6be615c, size 0xa4, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector4>* i___System__Collections__Generic__IComparer_1___UnityEngine__Vector4_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SweepLineRectUtils_EventComparer();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SweepLineRectUtils_EventComparer) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SweepLineRectUtils/ActiveComparer
#pragma pack(push, 0)
struct CORDL_TYPE SweepLineRectUtils_ActiveComparer {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*();

  /// @brief Method Compare, addr 0x6be6200, size 0x58, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>* i___System__Collections__Generic__IComparer_1___UnityEngine__Vector2_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SweepLineRectUtils_ActiveComparer();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9193 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SweepLineRectUtils
class CORDL_TYPE SweepLineRectUtils : public ::System::Object {
public:
  // Declarations
  using ActiveComparer = ::UnityEngine::Rendering::SweepLineRectUtils_ActiveComparer;

  using EventComparer = ::UnityEngine::Rendering::SweepLineRectUtils_EventComparer;

  /// @brief Method CalculateRectUnionArea, addr 0x6be5d04, size 0x398, virtual false, abstract: false, final false
  static inline float_t CalculateRectUnionArea(::ArrayW<::UnityEngine::Vector4> eventsBuffer, ::ArrayW<::UnityEngine::Vector2> activeBuffer, int32_t eventCount);

  /// @brief Method CalculateRectUnionArea, addr 0x6bdedd0, size 0x42c, virtual false, abstract: false, final false
  static inline float_t CalculateRectUnionArea(::System::Collections::Generic::List_1<::UnityEngine::Rect>* rects);

  /// @brief Method InsertEvents, addr 0x6be5ba4, size 0x160, virtual false, abstract: false, final false
  static inline void InsertEvents(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rect const> rect, ::ArrayW<::UnityEngine::Vector4> eventsBuffer, ::by_ref<int32_t> eventCount);

  /// @brief Method MergeLengthY, addr 0x6be609c, size 0xc0, virtual false, abstract: false, final false
  static inline float_t MergeLengthY(::ArrayW<::UnityEngine::Vector2> activeBuffer, int32_t count);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SweepLineRectUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SweepLineRectUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SweepLineRectUtils(SweepLineRectUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SweepLineRectUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SweepLineRectUtils(SweepLineRectUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SweepLineRectUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
