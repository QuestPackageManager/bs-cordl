#pragma once
// IWYU pragma private; include "System/Text/StringBuilderCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Text::StringBuilderCache*);
DEFINE_IL2CPP_CLASS(::System::Text::StringBuilderCache*, "System.Text", "StringBuilderCache");
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.StringBuilderCache
class CORDL_TYPE StringBuilderCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field t_cachedInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t_cachedInstance, put = setStaticF_t_cachedInstance)) ::System::Text::StringBuilder* t_cachedInstance;

  /// @brief Method Acquire, addr 0x61a27a0, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* Acquire(int32_t capacity);

  /// @brief Method GetStringAndRelease, addr 0x61a28c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringAndRelease(::System::Text::StringBuilder* sb);

  /// @brief Method Release, addr 0x61a6748, size 0xb8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21948 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Text::StringBuilderCache) == 0x10, "Size mismatch!");

} // namespace System::Text
