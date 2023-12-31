#pragma once
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
// Type: UnityEngine::AndroidJavaException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14909))
// CS Name: ::UnityEngine::AndroidJavaException*
class CORDL_TYPE AndroidJavaException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field mJavaStackTrace, offset 0x90, size 0x8
  __declspec(property(get = __get_mJavaStackTrace, put = __set_mJavaStackTrace))::StringW mJavaStackTrace;

  __declspec(property(get = get_StackTrace))::StringW StackTrace;

  constexpr ::StringW& __get_mJavaStackTrace();

  constexpr ::StringW const& __get_mJavaStackTrace() const;

  constexpr void __set_mJavaStackTrace(::StringW value);

  static inline ::UnityEngine::AndroidJavaException* New_ctor(::StringW message, ::StringW javaStackTrace);

  /// @brief Method .ctor, addr 0x2c7e190, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW javaStackTrace);

  /// @brief Method get_StackTrace, addr 0x2c83e74, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_StackTrace();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaException(AndroidJavaException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaException(AndroidJavaException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaException();

public:
  /// @brief Field mJavaStackTrace, offset: 0x90, size: 0x8, def value: None
  ::StringW ___mJavaStackTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaException, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaException, ___mJavaStackTrace) == 0x90, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaException*, "UnityEngine", "AndroidJavaException");
