#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLoopSystem)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
class __PlayerLoopSystem__UpdateFunction;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
class __PlayerLoopSystem__UpdateFunction;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction);
MARK_VAL_T(::UnityEngine::LowLevel::PlayerLoopSystem);
// Type: ::UpdateFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::LowLevel {
// Is value type: false
// CS Name: ::PlayerLoopSystem::UpdateFunction*
class CORDL_TYPE __PlayerLoopSystem__UpdateFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2e4c390, size 0x1014, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e4c2d4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerLoopSystem__UpdateFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerLoopSystem__UpdateFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerLoopSystem__UpdateFunction(__PlayerLoopSystem__UpdateFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerLoopSystem__UpdateFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerLoopSystem__UpdateFunction(__PlayerLoopSystem__UpdateFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::LowLevel
// Type: UnityEngine.LowLevel::PlayerLoopSystem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.LowLevel::PlayerLoopSystem
struct CORDL_TYPE PlayerLoopSystem {
public:
  // Declarations
  using UpdateFunction = ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction;

  /// @brief Method ToString, addr 0x2e4c2b4, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerLoopSystem();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "subSystemList", ty:
  // "::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem,::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*>", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty:
  // "::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "void*", modifiers: "", def_value: None }, CppParam {
  // name: "loopConditionFunction", ty: "void*", modifiers: "", def_value: None }]
  constexpr PlayerLoopSystem(::System::Type* type, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem, ::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> subSystemList,
                             ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* updateDelegate, void* updateFunction, void* loopConditionFunction) noexcept;

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field subSystemList, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem, ::Array<::UnityEngine::LowLevel::PlayerLoopSystem>*> subSystemList;

  /// @brief Field updateDelegate, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction* updateDelegate;

  /// @brief Field updateFunction, offset: 0x18, size: 0x8, def value: None
  void* updateFunction;

  /// @brief Field loopConditionFunction, offset: 0x20, size: 0x8, def value: None
  void* loopConditionFunction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevel::PlayerLoopSystem, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, subSystemList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, updateDelegate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, updateFunction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevel::PlayerLoopSystem, loopConditionFunction) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::LowLevel
NEED_NO_BOX(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::__PlayerLoopSystem__UpdateFunction*, "UnityEngine.LowLevel", "PlayerLoopSystem/UpdateFunction");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystem, "UnityEngine.LowLevel", "PlayerLoopSystem");
