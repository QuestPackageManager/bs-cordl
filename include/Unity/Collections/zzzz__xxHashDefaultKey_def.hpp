#pragma once
// IWYU pragma private; include "Unity/Collections/xxHashDefaultKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(xxHashDefaultKey)
// Forward declare root types
namespace Unity::Collections {
class xxHashDefaultKey;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::xxHashDefaultKey);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.xxHashDefaultKey
class CORDL_TYPE xxHashDefaultKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field kSecret, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kSecret, put = setStaticF_kSecret)) ::ArrayW<uint8_t, ::Array<uint8_t>*> kSecret;

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_kSecret();

  static inline void setStaticF_kSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr xxHashDefaultKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "xxHashDefaultKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  xxHashDefaultKey(xxHashDefaultKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "xxHashDefaultKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  xxHashDefaultKey(xxHashDefaultKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15705 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::xxHashDefaultKey, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::xxHashDefaultKey);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHashDefaultKey*, "Unity.Collections", "xxHashDefaultKey");
