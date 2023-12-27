#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssertionException)
// Forward declare root types
namespace UnityEngine::Assertions {
class AssertionException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Assertions::AssertionException);
// Type: UnityEngine.Assertions::AssertionException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Assertions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10316))
// CS Name: ::UnityEngine.Assertions::AssertionException*
class CORDL_TYPE AssertionException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field m_UserMessage, offset 0x90, size 0x8
  __declspec(property(get = __get_m_UserMessage, put = __set_m_UserMessage))::StringW m_UserMessage;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::StringW& __get_m_UserMessage();

  constexpr ::StringW const& __get_m_UserMessage() const;

  constexpr void __set_m_UserMessage(::StringW value);

  static inline ::UnityEngine::Assertions::AssertionException* New_ctor(::StringW message, ::StringW userMessage);

  /// @brief Method .ctor addr 0x2ce94e8 size 0x74 virtual false final false
  inline void _ctor(::StringW message, ::StringW userMessage);

  /// @brief Method get_Message addr 0x2ce9bfc size 0x74 virtual true final false
  inline ::StringW get_Message();

  // Ctor Parameters [CppParam { name: "", ty: "AssertionException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssertionException(AssertionException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssertionException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssertionException(AssertionException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionException();

public:
  /// @brief Field m_UserMessage, offset: 0x90, size: 0x8, def value: None
  ::StringW ___m_UserMessage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Assertions::AssertionException, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Assertions
NEED_NO_BOX(::UnityEngine::Assertions::AssertionException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionException*, "UnityEngine.Assertions", "AssertionException");
