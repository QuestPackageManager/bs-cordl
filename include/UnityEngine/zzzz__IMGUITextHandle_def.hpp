#pragma once
// IWYU pragma private; include "UnityEngine/IMGUITextHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
// Forward declare root types
namespace UnityEngine {
class IMGUITextHandle;
}
namespace UnityEngine {
class IMGUITextHandle_TextHandleTuple;
}
// Write type traits
MARK_REF_T(::UnityEngine::IMGUITextHandle*);
MARK_REF_T(::UnityEngine::IMGUITextHandle_TextHandleTuple*);
DEFINE_IL2CPP_CLASS(::UnityEngine::IMGUITextHandle*, "UnityEngine", "IMGUITextHandle");
DEFINE_IL2CPP_CLASS(::UnityEngine::IMGUITextHandle_TextHandleTuple*, "UnityEngine", "IMGUITextHandle/TextHandleTuple");
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

  /// @brief Method .ctor, addr 0x6fac3e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t lastTimeUsed, int32_t hashCode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUITextHandle_TextHandleTuple();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle_TextHandleTuple", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUITextHandle_TextHandleTuple(IMGUITextHandle_TextHandleTuple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle_TextHandleTuple", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUITextHandle_TextHandleTuple(IMGUITextHandle_TextHandleTuple const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20063 };

  /// @brief Field lastTimeUsed, offset: 0x10, size: 0x4, def value: None
  float_t ___lastTimeUsed;

  /// @brief Field hashCode, offset: 0x14, size: 0x4, def value: None
  int32_t ___hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IMGUITextHandle_TextHandleTuple, ___lastTimeUsed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::IMGUITextHandle_TextHandleTuple, ___hashCode) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IMGUITextHandle_TextHandleTuple) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.TextCore.Text.TextHandle
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IMGUITextHandle
class CORDL_TYPE IMGUITextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
public:
  // Declarations
  using TextHandleTuple = ::UnityEngine::IMGUITextHandle_TextHandleTuple;

  /// @brief Field isCachedOnNative, offset 0xd0, size 0x1
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

  /// @brief Field tuple, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_tuple, put = __cordl_internal_set_tuple)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* tuple;

  /// @brief Method ClearUnusedTextHandles, addr 0x6fac0d8, size 0x270, virtual false, abstract: false, final false
  static inline void ClearUnusedTextHandles();

  /// @brief Method ConvertGUIStyleToGenerationSettings, addr 0x6fab6c8, size 0x688, virtual false, abstract: false, final false
  static inline void ConvertGUIStyleToGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, ::UnityEngine::GUIStyle* style, ::UnityEngine::Color textColor,
                                                         ::StringW text, ::UnityEngine::Rect rect);

  /// @brief Method EmptyManagedCache, addr 0x6fa9730, size 0xb0, virtual false, abstract: false, final false
  static inline void EmptyManagedCache();

  /// @brief Method GetLineHeight, addr 0x6fa8920, size 0x1bc, virtual false, abstract: false, final false
  static inline float_t GetLineHeight(::UnityEngine::GUIStyle* style);

  /// @brief Method GetPixelsPerPoint, addr 0x6fac3f0, size 0x6c, virtual true, abstract: false, final false
  inline float_t GetPixelsPerPoint();

  /// @brief Method GetTextHandle, addr 0x6fabd50, size 0x370, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMGUITextHandle* GetTextHandle(::UnityEngine::TextCore::Text::TextGenerationSettings* settings, bool isCalledFromNative, ::by_ref<bool> isCached);

  /// @brief Method GetTextHandle, addr 0x6fa8ed8, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMGUITextHandle* GetTextHandle(::UnityEngine::GUIStyle* style, ::UnityEngine::Rect position, ::StringW content, ::UnityEngine::Color32 textColor);

  /// @brief Method GetTextHandle, addr 0x6fa9560, size 0x130, virtual false, abstract: false, final false
  static inline ::UnityEngine::IMGUITextHandle* GetTextHandle(::UnityEngine::GUIStyle* style, ::UnityEngine::Rect position, ::StringW content, ::UnityEngine::Color32 textColor,
                                                              ::by_ref<bool> isCached);

  /// @brief Method IsAdvancedTextEnabledForElement, addr 0x6fac534, size 0x8, virtual true, abstract: false, final false
  inline bool IsAdvancedTextEnabledForElement();

  /// @brief Method LegacyClippingToNewOverflow, addr 0x6fac51c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextOverflowMode LegacyClippingToNewOverflow(::UnityEngine::TextClipping clipping);

  static inline ::UnityEngine::IMGUITextHandle* New_ctor();

  /// @brief Method ShouldCleanup, addr 0x6fac0c0, size 0x18, virtual false, abstract: false, final false
  static inline bool ShouldCleanup(float_t currentTime, float_t lastTime, float_t cleanupThreshold);

  constexpr bool const& __cordl_internal_get_isCachedOnNative() const;

  constexpr bool& __cordl_internal_get_isCachedOnNative();

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* const& __cordl_internal_get_tuple() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>*& __cordl_internal_get_tuple();

  constexpr void __cordl_internal_set_isCachedOnNative(bool value);

  constexpr void __cordl_internal_set_tuple(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* value);

  /// @brief Method .ctor, addr 0x6fac348, size 0x9c, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUITextHandle(IMGUITextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUITextHandle", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUITextHandle(IMGUITextHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20064 };

  /// @brief Field tuple, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::IMGUITextHandle_TextHandleTuple*>* ___tuple;

  /// @brief Field isCachedOnNative, offset: 0xd0, size: 0x1, def value: None
  bool ___isCachedOnNative;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IMGUITextHandle, ___tuple) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::IMGUITextHandle, ___isCachedOnNative) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IMGUITextHandle) == 0xd8, "Size mismatch!");

} // namespace UnityEngine
