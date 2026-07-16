#pragma once
// IWYU pragma private; include "UnityEngine/SetupCoroutine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetupCoroutine)
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class SetupCoroutine;
}
// Write type traits
MARK_REF_T(::UnityEngine::SetupCoroutine*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SetupCoroutine*, "UnityEngine", "SetupCoroutine");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SetupCoroutine
class CORDL_TYPE SetupCoroutine : public ::System::Object {
public:
  // Declarations
  /// @brief Method InvokeMember, addr 0x6adb248, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Object* InvokeMember(::System::Object* behaviour, ::StringW name, ::System::Object* variable);

  /// @brief Method InvokeMoveNext, addr 0x6adb130, size 0x118, virtual false, abstract: false, final false
  static inline void InvokeMoveNext(::System::Collections::IEnumerator* enumerator, ::System::IntPtr returnValueAddress);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SetupCoroutine) == 0x10, "Size mismatch!");

} // namespace UnityEngine
