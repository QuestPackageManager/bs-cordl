#pragma once
// IWYU pragma private; include "UnityEngine/IMGUITextHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IMGUITextHandle)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class IMGUITextHandle_TextHandleTuple;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextClipping;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class IMGUITextHandle;
}
namespace UnityEngine {
class IMGUITextHandle_TextHandleTuple;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IMGUITextHandle);
MARK_REF_PTR_T(::UnityEngine::IMGUITextHandle_TextHandleTuple);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IMGUITextHandle/TextHandleTuple
class CORDL_TYPE IMGUITextHandle_TextHandleTuple : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashCode, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field lastTimeUsed, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lastTimeUsed, put = __cordl_internal_set_lastTimeUsed)) float_t lastTimeUsed;

  static inline ::UnityEngine::IMGUITextHandle_TextHandleTuple* New_ctor(float_t lastTimeUsed, int32_t hashCode);

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr float_t const& __cordl_internal_get_lastTimeUsed() const;

  constexpr float_t& __cordl_internal_get_lastTimeUsed();

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_lastTimeUsed(float_t value);

  /// @brief Method .ctor, addr 0x69834ec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t lastTimeUsed, int32_t hashCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUITextHandle_TextHandleTuple();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle_TextHandleTuple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUITextHandle_TextHandleTuple(IMGUITextHandle_TextHandleTuple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle_TextHandleTuple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUITextHandle_TextHandleTuple(IMGUITextHandle_TextHandleTuple const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19612 };

  /// @brief Field lastTimeUsed, offset: 0x10, size: 0x4, def value: None
  float_t ___lastTimeUsed;

  /// @brief Field hashCode, offset: 0x14, size: 0x4, def value: None
  int32_t ___hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IMGUITextHandle_TextHandleTuple, ___lastTimeUsed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::IMGUITextHandle_TextHandleTuple, ___hashCode) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IMGUITextHandle_TextHandleTuple, 0x18>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.TextCore.Text.TextHandle
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IMGUITextHandle
class CORDL_TYPE IMGUITextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
public:
  // Declarations
  using TextHandleTuple = ::UnityEngine::IMGUITextHandle_TextHandleTuple;

  /// @brief Field isCachedOnNative, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_isCachedOnNative, put = __cordl_internal_set_isCachedOnNative)) bool isCachedOnNative;

  /// @brief Field lastCleanupTime, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_lastCleanupTime, put = setStaticF_lastCleanupTime)) float_t lastCleanupTime;

  /// @brief Field newHandlesSinceCleanup, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_newHandlesSinceCleanup, put = setStaticF_newHandlesSinceCleanup)) int32_t newHandlesSinceCleanup;

  /// @brief Field textHandles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textHandles, put = setStaticF_textHandles)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>* textHandles;

  /// @brief Field textHandlesTuple, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textHandlesTuple,
                      put = setStaticF_textHandlesTuple)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* textHandlesTuple;

  /// @brief Field tuple, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_tuple, put = __cordl_internal_set_tuple)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* tuple;

  /// @brief Method ClearUnusedTextHandles, addr 0x69831f4, size 0x260, virtual false, abstract: false, final false
  static inline void ClearUnusedTextHandles();

  /// @brief Method ConvertGUIStyleToGenerationSettings, addr 0x6982a10, size 0x444, virtual false, abstract: false, final false
  static inline void ConvertGUIStyleToGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, ::UnityEngine::GUIStyle* style, ::UnityEngine::Color textColor,
                                                         ::StringW text, ::UnityEngine::Rect rect);

  /// @brief Method EmptyManagedCache, addr 0x6980b3c, size 0xb0, virtual false, abstract: false, final false
  static inline void EmptyManagedCache();

  /// @brief Method GetLineHeight, addr 0x697ffb0, size 0xe8, virtual false, abstract: false, final false
  static inline float_t GetLineHeight(::UnityEngine::GUIStyle* style);

  /// @brief Method GetPreferredSize, addr 0x69805cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredSize();

  /// @brief Method GetTextHandle, addr 0x6982e54, size 0x388, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMGUITextHandle* GetTextHandle(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, bool isCalledFromNative, ::ByRef<bool> isCached);

  /// @brief Method GetTextHandle, addr 0x698039c, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMGUITextHandle* GetTextHandle(::UnityEngine::GUIStyle* style, ::UnityEngine::Rect position, ::StringW content, ::UnityEngine::Color32 textColor);

  /// @brief Method GetTextHandle, addr 0x698096c, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMGUITextHandle* GetTextHandle(::UnityEngine::GUIStyle* style, ::UnityEngine::Rect position, ::StringW content, ::UnityEngine::Color32 textColor,
                                                              ::ByRef<bool> isCached);

  /// @brief Method LegacyClippingToNewOverflow, addr 0x69834f8, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextOverflowMode LegacyClippingToNewOverflow(::UnityEngine::TextClipping clipping);

  static inline ::UnityEngine::IMGUITextHandle* New_ctor();

  /// @brief Method ShouldCleanup, addr 0x69831dc, size 0x18, virtual false, abstract: false, final false
  static inline bool ShouldCleanup(float_t currentTime, float_t lastTime, float_t cleanupThreshold);

  constexpr bool const& __cordl_internal_get_isCachedOnNative() const;

  constexpr bool& __cordl_internal_get_isCachedOnNative();

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* const& __cordl_internal_get_tuple() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>*& __cordl_internal_get_tuple();

  constexpr void __cordl_internal_set_isCachedOnNative(bool value);

  constexpr void __cordl_internal_set_tuple(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* value);

  /// @brief Method .ctor, addr 0x6983454, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_lastCleanupTime();

  static inline int32_t getStaticF_newHandlesSinceCleanup();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>* getStaticF_textHandles();

  static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* getStaticF_textHandlesTuple();

  static inline void setStaticF_lastCleanupTime(float_t value);

  static inline void setStaticF_newHandlesSinceCleanup(int32_t value);

  static inline void setStaticF_textHandles(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::IMGUITextHandle*>* value);

  static inline void setStaticF_textHandlesTuple(::System::Collections::Generic::LinkedList_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUITextHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUITextHandle(IMGUITextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUITextHandle(IMGUITextHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19613 };

  /// @brief Field tuple, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* ___tuple;

  /// @brief Field isCachedOnNative, offset: 0xb8, size: 0x1, def value: None
  bool ___isCachedOnNative;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IMGUITextHandle, ___tuple) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::IMGUITextHandle, ___isCachedOnNative) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IMGUITextHandle, 0xc0>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IMGUITextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IMGUITextHandle*, "UnityEngine", "IMGUITextHandle");
NEED_NO_BOX(::UnityEngine::IMGUITextHandle_TextHandleTuple);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IMGUITextHandle_TextHandleTuple*, "UnityEngine", "IMGUITextHandle/TextHandleTuple");
