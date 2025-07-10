#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJavaException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidJavaException)
// Forward declare root types
namespace UnityEngine {
class AndroidJavaException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaException);
// Dependencies System.Exception
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJavaException
class CORDL_TYPE AndroidJavaException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_StackTrace)) ::StringW StackTrace;

  /// @brief Field mJavaStackTrace, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_mJavaStackTrace, put = __cordl_internal_set_mJavaStackTrace)) ::StringW mJavaStackTrace;

  static inline ::UnityEngine::AndroidJavaException* New_ctor(::StringW message, ::StringW javaStackTrace);

  constexpr ::StringW const& __cordl_internal_get_mJavaStackTrace() const;

  constexpr ::StringW& __cordl_internal_get_mJavaStackTrace();

  constexpr void __cordl_internal_set_mJavaStackTrace(::StringW value);

  /// @brief Method .ctor, addr 0x4841f14, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW javaStackTrace);

  /// @brief Method get_StackTrace, addr 0x48454ac, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_StackTrace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaException(AndroidJavaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaException(AndroidJavaException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16767 };

  /// @brief Field mJavaStackTrace, offset: 0x90, size: 0x8, def value: None
  ::StringW ___mJavaStackTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJavaException, ___mJavaStackTrace) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaException, 0x98>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaException*, "UnityEngine", "AndroidJavaException");
