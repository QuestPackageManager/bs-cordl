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
class __UnhandledExceptionHandler____c;
}
// Forward declare root types
namespace UnityEngine {
class UnhandledExceptionHandler;
}
namespace UnityEngine {
class __UnhandledExceptionHandler____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnhandledExceptionHandler);
MARK_REF_PTR_T(::UnityEngine::__UnhandledExceptionHandler____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnhandledExceptionHandler::<>c*
class CORDL_TYPE __UnhandledExceptionHandler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::__UnhandledExceptionHandler____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::UnhandledExceptionEventHandler* __9__0_0;

  static inline ::UnityEngine::__UnhandledExceptionHandler____c* New_ctor();

  /// @brief Method <RegisterUECatcher>b__0_0, addr 0x341149c, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterUECatcher_b__0_0(::System::Object* sender, ::System::UnhandledExceptionEventArgs* e);

  /// @brief Method .ctor, addr 0x3411494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::__UnhandledExceptionHandler____c* getStaticF___9();

  static inline ::System::UnhandledExceptionEventHandler* getStaticF___9__0_0();

  static inline void setStaticF___9(::UnityEngine::__UnhandledExceptionHandler____c* value);

  static inline void setStaticF___9__0_0(::System::UnhandledExceptionEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnhandledExceptionHandler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnhandledExceptionHandler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnhandledExceptionHandler____c(__UnhandledExceptionHandler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnhandledExceptionHandler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnhandledExceptionHandler____c(__UnhandledExceptionHandler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__UnhandledExceptionHandler____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::UnhandledExceptionHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::UnhandledExceptionHandler*
class CORDL_TYPE UnhandledExceptionHandler : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::__UnhandledExceptionHandler____c;

  /// @brief Method RegisterUECatcher, addr 0x3411338, size 0xf8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnhandledExceptionHandler, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnhandledExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnhandledExceptionHandler*, "UnityEngine", "UnhandledExceptionHandler");
NEED_NO_BOX(::UnityEngine::__UnhandledExceptionHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__UnhandledExceptionHandler____c*, "UnityEngine", "UnhandledExceptionHandler/<>c");
