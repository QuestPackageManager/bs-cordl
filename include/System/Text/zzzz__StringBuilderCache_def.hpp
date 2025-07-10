#pragma once
// IWYU pragma private; include "System/Text/StringBuilderCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuilderCache)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Text {
class StringBuilderCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::StringBuilderCache);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.StringBuilderCache
class CORDL_TYPE StringBuilderCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field t_cachedInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t_cachedInstance, put = setStaticF_t_cachedInstance)) ::System::Text::StringBuilder* t_cachedInstance;

  /// @brief Method Acquire, addr 0x424a610, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* Acquire(int32_t capacity);

  /// @brief Method GetStringAndRelease, addr 0x424a6d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringAndRelease(::System::Text::StringBuilder* sb);

  /// @brief Method Release, addr 0x424e5c4, size 0x78, virtual false, abstract: false, final false
  static inline void Release(::System::Text::StringBuilder* sb);

  static inline ::System::Text::StringBuilder* getStaticF_t_cachedInstance();

  static inline void setStaticF_t_cachedInstance(::System::Text::StringBuilder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringBuilderCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringBuilderCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringBuilderCache(StringBuilderCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilderCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringBuilderCache(StringBuilderCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17990 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::StringBuilderCache, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::StringBuilderCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::StringBuilderCache*, "System.Text", "StringBuilderCache");
