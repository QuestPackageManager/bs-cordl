#pragma once
// IWYU pragma private; include "UnityEngine/GlobalJavaObjectRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalJavaObjectRef)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GlobalJavaObjectRef);
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GlobalJavaObjectRef
class CORDL_TYPE GlobalJavaObjectRef : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field m_jobject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jobject, put = __cordl_internal_set_m_jobject)) ::System::IntPtr m_jobject;

  /// @brief Method Dispose, addr 0x48455d4, size 0x40, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Finalize, addr 0x4845540, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityEngine::GlobalJavaObjectRef* New_ctor(::System::IntPtr jobject);

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_jobject() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_jobject();

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void __cordl_internal_set_m_jobject(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x48454d0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr jobject);

  /// @brief Method op_Implicit, addr 0x4845614, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Implicit___System__IntPtr(::UnityEngine::GlobalJavaObjectRef* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalJavaObjectRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalJavaObjectRef(GlobalJavaObjectRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalJavaObjectRef(GlobalJavaObjectRef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16768 };

  /// @brief Field m_disposed, offset: 0x10, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field m_jobject, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_jobject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GlobalJavaObjectRef, ___m_disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GlobalJavaObjectRef, ___m_jobject) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GlobalJavaObjectRef, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GlobalJavaObjectRef);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GlobalJavaObjectRef*, "UnityEngine", "GlobalJavaObjectRef");
