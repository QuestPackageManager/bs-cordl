#pragma once
// IWYU pragma private; include "GlobalNamespace/EssentialHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EssentialHelpers)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class EssentialHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EssentialHelpers);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EssentialHelpers
class CORDL_TYPE EssentialHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetOrAddComponent(::UnityEngine::GameObject* go);

  /// @brief Method SafeDestroy, addr 0x22b231c, size 0xcc, virtual false, abstract: false, final false
  static inline void SafeDestroy(::UnityEngine::Object* obj);

  /// @brief Method get_CurrentTimeStamp, addr 0x22b2244, size 0xd8, virtual false, abstract: false, final false
  static inline double_t get_CurrentTimeStamp();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EssentialHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EssentialHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EssentialHelpers(EssentialHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EssentialHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EssentialHelpers(EssentialHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EssentialHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EssentialHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EssentialHelpers*, "", "EssentialHelpers");
