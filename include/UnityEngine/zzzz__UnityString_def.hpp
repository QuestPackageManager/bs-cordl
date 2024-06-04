#pragma once
// IWYU pragma private; include "UnityEngine/UnityString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityString)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class UnityString;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnityString);
// Type: UnityEngine::UnityString
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::UnityString*
class CORDL_TYPE UnityString : public ::System::Object {
public:
  // Declarations
  /// @brief Method Format, addr 0x3497b64, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW Format(::StringW fmt, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityString(UnityString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityString(UnityString const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityString, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnityString);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityString*, "UnityEngine", "UnityString");
