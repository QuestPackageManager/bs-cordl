#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalJavaObjectRef)
// Forward declare root types
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GlobalJavaObjectRef);
// Type: UnityEngine::GlobalJavaObjectRef
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14910))
// CS Name: ::UnityEngine::GlobalJavaObjectRef*
class CORDL_TYPE GlobalJavaObjectRef : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_disposed, put = __cordl_internal_set_m_disposed)) bool m_disposed;

  /// @brief Field m_jobject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_jobject, put = __cordl_internal_set_m_jobject)) void* m_jobject;

  constexpr bool& __cordl_internal_get_m_disposed();

  constexpr bool const& __cordl_internal_get_m_disposed() const;

  constexpr void __cordl_internal_set_m_disposed(bool value);

  constexpr void*& __cordl_internal_get_m_jobject();

  constexpr void* const& __cordl_internal_get_m_jobject() const;

  constexpr void __cordl_internal_set_m_jobject(void* value);

  static inline ::UnityEngine::GlobalJavaObjectRef* New_ctor(void* jobject);

  /// @brief Method .ctor, addr 0x2c83e98, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(void* jobject);

  /// @brief Method Finalize, addr 0x2c83f88, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method op_Implicit, addr 0x2c84098, size 0x18, virtual false, abstract: false, final false
  static inline void* op_Implicit_void_(::UnityEngine::GlobalJavaObjectRef* obj);

  /// @brief Method Dispose, addr 0x2c8401c, size 0x7c, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalJavaObjectRef(GlobalJavaObjectRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalJavaObjectRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalJavaObjectRef(GlobalJavaObjectRef const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalJavaObjectRef();

public:
  /// @brief Field m_disposed, offset: 0x10, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field m_jobject, offset: 0x18, size: 0x8, def value: None
  void* ___m_jobject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GlobalJavaObjectRef, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GlobalJavaObjectRef, ___m_disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GlobalJavaObjectRef, ___m_jobject) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GlobalJavaObjectRef);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GlobalJavaObjectRef*, "UnityEngine", "GlobalJavaObjectRef");
