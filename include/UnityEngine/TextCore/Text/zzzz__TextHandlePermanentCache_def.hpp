#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandlePermanentCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextHandlePermanentCache)
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
class TextHandlePermanentCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextHandlePermanentCache);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextHandlePermanentCache
class CORDL_TYPE TextHandlePermanentCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_TextInfoPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s_TextInfoPool,
                      put = __cordl_internal_set_s_TextInfoPool)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* s_TextInfoPool;

  /// @brief Field syncRoot, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_syncRoot, put = __cordl_internal_set_syncRoot)) ::System::Object* syncRoot;

  /// @brief Method AddTextInfoToCache, addr 0x69dc314, size 0x234, virtual true, abstract: false, final false
  inline void AddTextInfoToCache(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  static inline ::UnityEngine::TextCore::Text::TextHandlePermanentCache* New_ctor();

  /// @brief Method RemoveTextInfoFromCache, addr 0x69dc548, size 0x12c, virtual false, abstract: false, final false
  inline void RemoveTextInfoFromCache(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* const& __cordl_internal_get_s_TextInfoPool() const;

  constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>*& __cordl_internal_get_s_TextInfoPool();

  constexpr ::System::Object* const& __cordl_internal_get_syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get_syncRoot();

  constexpr void __cordl_internal_set_s_TextInfoPool(::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* value);

  constexpr void __cordl_internal_set_syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x69dc674, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandlePermanentCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandlePermanentCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandlePermanentCache(TextHandlePermanentCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandlePermanentCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandlePermanentCache(TextHandlePermanentCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17228 };

  /// @brief Field s_TextInfoPool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<::UnityEngine::TextCore::Text::TextInfo*>* ___s_TextInfoPool;

  /// @brief Field syncRoot, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandlePermanentCache, ___s_TextInfoPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandlePermanentCache, ___syncRoot) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextHandlePermanentCache, 0x20>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextHandlePermanentCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextHandlePermanentCache*, "UnityEngine.TextCore.Text", "TextHandlePermanentCache");
