#pragma once
// IWYU pragma private; include "UnityEngine/ClassLibraryInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClassLibraryInitializer)
namespace System::Reflection {
class Assembly;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class ResolveEventArgs;
}
namespace System {
class ResolveEventHandler;
}
namespace UnityEngine {
class ClassLibraryInitializer___c;
}
// Forward declare root types
namespace UnityEngine {
class ClassLibraryInitializer;
}
namespace UnityEngine {
class ClassLibraryInitializer___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ClassLibraryInitializer);
MARK_REF_PTR_T(::UnityEngine::ClassLibraryInitializer___c);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ClassLibraryInitializer/<>c
class CORDL_TYPE ClassLibraryInitializer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ClassLibraryInitializer___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::ResolveEventHandler* __9__2_0;

  static inline ::UnityEngine::ClassLibraryInitializer___c* New_ctor();

  /// @brief Method <InitAssemblyRedirections>b__2_0, addr 0x48a93bc, size 0x108, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* _InitAssemblyRedirections_b__2_0(::System::Object* _, ::System::ResolveEventArgs* args);

  /// @brief Method .ctor, addr 0x48a93b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ClassLibraryInitializer___c* getStaticF___9();

  static inline ::System::ResolveEventHandler* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::ClassLibraryInitializer___c* value);

  static inline void setStaticF___9__2_0(::System::ResolveEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassLibraryInitializer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassLibraryInitializer___c(ClassLibraryInitializer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassLibraryInitializer___c(ClassLibraryInitializer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ClassLibraryInitializer___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ClassLibraryInitializer
class CORDL_TYPE ClassLibraryInitializer : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ClassLibraryInitializer___c;

  /// @brief Method Init, addr 0x48a9134, size 0x8, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method InitAssemblyRedirections, addr 0x48a9264, size 0xf4, virtual false, abstract: false, final false
  static inline void InitAssemblyRedirections();

  /// @brief Method InitStdErrWithHandle, addr 0x48a913c, size 0x128, virtual false, abstract: false, final false
  static inline void InitStdErrWithHandle(::System::IntPtr fileHandle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassLibraryInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassLibraryInitializer(ClassLibraryInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassLibraryInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassLibraryInitializer(ClassLibraryInitializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ClassLibraryInitializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ClassLibraryInitializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClassLibraryInitializer*, "UnityEngine", "ClassLibraryInitializer");
NEED_NO_BOX(::UnityEngine::ClassLibraryInitializer___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClassLibraryInitializer___c*, "UnityEngine", "ClassLibraryInitializer/<>c");
