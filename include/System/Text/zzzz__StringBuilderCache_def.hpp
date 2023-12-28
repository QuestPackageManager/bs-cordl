#pragma once
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
// Type: System.Text::StringBuilderCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15460))
// CS Name: ::System.Text::StringBuilderCache*
class CORDL_TYPE StringBuilderCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field t_cachedInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_cachedInstance, put = setStaticF_t_cachedInstance))::System::Text::StringBuilder* t_cachedInstance;

  static inline void setStaticF_t_cachedInstance(::System::Text::StringBuilder* value);

  static inline ::System::Text::StringBuilder* getStaticF_t_cachedInstance();

  /// @brief Method Acquire addr 0x285e154 size 0xc8 virtual false final false
  static inline ::System::Text::StringBuilder* Acquire(int32_t capacity);

  /// @brief Method Release addr 0x28619f0 size 0x78 virtual false final false
  static inline void Release(::System::Text::StringBuilder* sb);

  /// @brief Method GetStringAndRelease addr 0x285e21c size 0x3c virtual false final false
  static inline ::StringW GetStringAndRelease(::System::Text::StringBuilder* sb);

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilderCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringBuilderCache(StringBuilderCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringBuilderCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringBuilderCache(StringBuilderCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringBuilderCache();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::StringBuilderCache, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::StringBuilderCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::StringBuilderCache*, "System.Text", "StringBuilderCache");
