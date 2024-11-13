#pragma once
// IWYU pragma private; include "UnityEngine/ClassLibraryInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
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
class __ClassLibraryInitializer____c;
}
// Forward declare root types
namespace UnityEngine {
class ClassLibraryInitializer;
}
namespace UnityEngine {
class __ClassLibraryInitializer____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ClassLibraryInitializer);
MARK_REF_PTR_T(::UnityEngine::__ClassLibraryInitializer____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::ClassLibraryInitializer::<>c*
class CORDL_TYPE __ClassLibraryInitializer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::__ClassLibraryInitializer____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::ResolveEventHandler* __9__2_0;

  static inline ::UnityEngine::__ClassLibraryInitializer____c* New_ctor();

  /// @brief Method <InitAssemblyRedirections>b__2_0, addr 0x4845bd4, size 0x108, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* _InitAssemblyRedirections_b__2_0(::System::Object* _, ::System::ResolveEventArgs* args);

  /// @brief Method .ctor, addr 0x4845bcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::__ClassLibraryInitializer____c* getStaticF___9();

  static inline ::System::ResolveEventHandler* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::__ClassLibraryInitializer____c* value);

  static inline void setStaticF___9__2_0(::System::ResolveEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClassLibraryInitializer____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ClassLibraryInitializer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClassLibraryInitializer____c(__ClassLibraryInitializer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClassLibraryInitializer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClassLibraryInitializer____c(__ClassLibraryInitializer____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ClassLibraryInitializer____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ClassLibraryInitializer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ClassLibraryInitializer*
class CORDL_TYPE ClassLibraryInitializer : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::__ClassLibraryInitializer____c;

  /// @brief Method Init, addr 0x484594c, size 0x8, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method InitAssemblyRedirections, addr 0x4845a7c, size 0xf4, virtual false, abstract: false, final false
  static inline void InitAssemblyRedirections();

  /// @brief Method InitStdErrWithHandle, addr 0x4845954, size 0x128, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ClassLibraryInitializer, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ClassLibraryInitializer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClassLibraryInitializer*, "UnityEngine", "ClassLibraryInitializer");
NEED_NO_BOX(::UnityEngine::__ClassLibraryInitializer____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ClassLibraryInitializer____c*, "UnityEngine", "ClassLibraryInitializer/<>c");
