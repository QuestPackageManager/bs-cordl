#pragma once
// IWYU pragma private; include "UnityEngine/SetupCoroutine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetupCoroutine)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class SetupCoroutine;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SetupCoroutine);
// Type: UnityEngine::SetupCoroutine
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SetupCoroutine*
class CORDL_TYPE SetupCoroutine : public ::System::Object {
public:
  // Declarations
  /// @brief Method InvokeMember, addr 0x340eb34, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* InvokeMember(::System::Object* behaviour, ::StringW name, ::System::Object* variable);

  /// @brief Method InvokeMoveNext, addr 0x340e9e0, size 0x154, virtual false, abstract: false, final false
  static inline void InvokeMoveNext(::System::Collections::IEnumerator* enumerator, void* returnValueAddress);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetupCoroutine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetupCoroutine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetupCoroutine(SetupCoroutine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetupCoroutine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetupCoroutine(SetupCoroutine const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SetupCoroutine, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SetupCoroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SetupCoroutine*, "UnityEngine", "SetupCoroutine");
