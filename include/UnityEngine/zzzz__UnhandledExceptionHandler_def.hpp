#pragma once
// IWYU pragma private; include "UnityEngine/UnhandledExceptionHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnhandledExceptionHandler)
namespace System {
class Object;
}
namespace System {
class UnhandledExceptionEventArgs;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace UnityEngine {
class UnhandledExceptionHandler___c;
}
// Forward declare root types
namespace UnityEngine {
class UnhandledExceptionHandler;
}
namespace UnityEngine {
class UnhandledExceptionHandler___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnhandledExceptionHandler);
MARK_REF_PTR_T(::UnityEngine::UnhandledExceptionHandler___c);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnhandledExceptionHandler/<>c
class CORDL_TYPE UnhandledExceptionHandler___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UnhandledExceptionHandler___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::UnhandledExceptionEventHandler* __9__0_0;

  static inline ::UnityEngine::UnhandledExceptionHandler___c* New_ctor();

  /// @brief Method <RegisterUECatcher>b__0_0, addr 0x48b0bd8, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterUECatcher_b__0_0(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e);

  /// @brief Method .ctor, addr 0x48b0bd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UnhandledExceptionHandler___c* getStaticF___9();

  static inline ::System::UnhandledExceptionEventHandler* getStaticF___9__0_0();

  static inline void setStaticF___9(::UnityEngine::UnhandledExceptionHandler___c* value);

  static inline void setStaticF___9__0_0(::System::UnhandledExceptionEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnhandledExceptionHandler___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnhandledExceptionHandler___c(UnhandledExceptionHandler___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnhandledExceptionHandler___c(UnhandledExceptionHandler___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10914 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnhandledExceptionHandler___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnhandledExceptionHandler
class CORDL_TYPE UnhandledExceptionHandler : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UnhandledExceptionHandler___c;

  /// @brief Method RegisterUECatcher, addr 0x48b0a80, size 0xf4, virtual false, abstract: false, final false
  static inline void RegisterUECatcher();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnhandledExceptionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnhandledExceptionHandler(UnhandledExceptionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnhandledExceptionHandler(UnhandledExceptionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnhandledExceptionHandler, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnhandledExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnhandledExceptionHandler*, "UnityEngine", "UnhandledExceptionHandler");
NEED_NO_BOX(::UnityEngine::UnhandledExceptionHandler___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnhandledExceptionHandler___c*, "UnityEngine", "UnhandledExceptionHandler/<>c");
