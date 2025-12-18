#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandleTemporaryCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextHandleTemporaryCache)
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextHandleTemporaryCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextHandleTemporaryCache);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandleTemporaryCache
class CORDL_TYPE TextHandleTemporaryCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentFrame, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_currentFrame, put = __cordl_internal_set_currentFrame)) int32_t currentFrame;

  /// @brief Field s_TextInfoPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s_TextInfoPool,
                      put = __cordl_internal_set_s_TextInfoPool)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* s_TextInfoPool;

  /// @brief Field syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_syncRoot, put = __cordl_internal_set_syncRoot)) ::System::Object* syncRoot;

  /// @brief Method AddTextInfoToCache, addr 0x6a45688, size 0x480, virtual false, abstract: false, final false
  inline void AddTextInfoToCache(::UnityEngine::TextCore::Text::TextHandle* textHandle, int32_t hashCode);

  /// @brief Method ClearTemporaryCache, addr 0x6a45584, size 0xd8, virtual false, abstract: false, final false
  inline void ClearTemporaryCache();

  static inline ::UnityEngine::TextCore::Text::TextHandleTemporaryCache* New_ctor();

  /// @brief Method RecycleTextInfoFromCache, addr 0x6a45c48, size 0x264, virtual false, abstract: false, final false
  inline void RecycleTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  /// @brief Method RefreshCaching, addr 0x6a45b08, size 0x140, virtual false, abstract: false, final false
  inline void RefreshCaching(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  /// @brief Method RemoveTextInfoFromCache, addr 0x6a45eac, size 0x1b0, virtual true, abstract: false, final false
  inline void RemoveTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  /// @brief Method UpdateCurrentFrame, addr 0x6a4605c, size 0x40, virtual false, abstract: false, final false
  inline void UpdateCurrentFrame();

  constexpr int32_t const& __cordl_internal_get_currentFrame() const;

  constexpr int32_t& __cordl_internal_get_currentFrame();

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* const& __cordl_internal_get_s_TextInfoPool() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>*& __cordl_internal_get_s_TextInfoPool();

  constexpr ::System::Object* const& __cordl_internal_get_syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get_syncRoot();

  constexpr void __cordl_internal_set_currentFrame(int32_t value);

  constexpr void __cordl_internal_set_s_TextInfoPool(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  constexpr void __cordl_internal_set_syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x6a4609c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandleTemporaryCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandleTemporaryCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandleTemporaryCache(TextHandleTemporaryCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandleTemporaryCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandleTemporaryCache(TextHandleTemporaryCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17243 };

  /// @brief Field s_MinFramesInCache offset 0xffffffff size 0x4
  static constexpr int32_t s_MinFramesInCache{ static_cast<int32_t>(0x2) };

  /// @brief Field s_TextInfoPool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* ___s_TextInfoPool;

  /// @brief Field currentFrame, offset: 0x18, size: 0x4, def value: None
  int32_t ___currentFrame;

  /// @brief Field syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandleTemporaryCache, ___s_TextInfoPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandleTemporaryCache, ___currentFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandleTemporaryCache, ___syncRoot) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextHandleTemporaryCache, 0x28>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextHandleTemporaryCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextHandleTemporaryCache*, "UnityEngine.TextCore.Text", "TextHandleTemporaryCache");
