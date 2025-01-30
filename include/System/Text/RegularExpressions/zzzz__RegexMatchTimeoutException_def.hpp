#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexMatchTimeoutException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeoutException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegexMatchTimeoutException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexMatchTimeoutException;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexMatchTimeoutException);
// Dependencies System.Runtime.Serialization.ISerializable, System.TimeSpan, System.TimeoutException
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexMatchTimeoutException
class CORDL_TYPE RegexMatchTimeoutException : public ::System::TimeoutException {
public:
  // Declarations
  __declspec(property(get = get_Input)) ::StringW Input;

  __declspec(property(get = get_MatchTimeout)) ::System::TimeSpan MatchTimeout;

  __declspec(property(get = get_Pattern)) ::StringW Pattern;

  /// @brief Field <Input>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Input_k__BackingField, put = __cordl_internal_set__Input_k__BackingField)) ::StringW _Input_k__BackingField;

  /// @brief Field <MatchTimeout>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__MatchTimeout_k__BackingField, put = __cordl_internal_set__MatchTimeout_k__BackingField)) ::System::TimeSpan _MatchTimeout_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__Pattern_k__BackingField, put = __cordl_internal_set__Pattern_k__BackingField)) ::StringW _Pattern_k__BackingField;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  static inline ::System::Text::RegularExpressions::RegexMatchTimeoutException* New_ctor();

  static inline ::System::Text::RegularExpressions::RegexMatchTimeoutException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                         ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::RegularExpressions::RegexMatchTimeoutException* New_ctor(::StringW regexInput, ::StringW regexPattern, ::System::TimeSpan matchTimeout);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x4423484, size 0xfc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::StringW const& __cordl_internal_get__Input_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Input_k__BackingField();

  constexpr ::System::TimeSpan const& __cordl_internal_get__MatchTimeout_k__BackingField() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__MatchTimeout_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Pattern_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Pattern_k__BackingField();

  constexpr void __cordl_internal_set__Input_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MatchTimeout_k__BackingField(::System::TimeSpan value);

  constexpr void __cordl_internal_set__Pattern_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x44232b8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x442334c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x44231ec, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW regexInput, ::StringW regexPattern, ::System::TimeSpan matchTimeout);

  /// @brief Method get_Input, addr 0x4423580, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Input();

  /// @brief Method get_MatchTimeout, addr 0x4423590, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_MatchTimeout();

  /// @brief Method get_Pattern, addr 0x4423588, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Pattern();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexMatchTimeoutException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexMatchTimeoutException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexMatchTimeoutException(RegexMatchTimeoutException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexMatchTimeoutException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexMatchTimeoutException(RegexMatchTimeoutException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9241 };

  /// @brief Field <Input>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____Input_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____Pattern_k__BackingField;

  /// @brief Field <MatchTimeout>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::TimeSpan ____MatchTimeout_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexMatchTimeoutException, ____Input_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexMatchTimeoutException, ____Pattern_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexMatchTimeoutException, ____MatchTimeout_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexMatchTimeoutException, 0xa8>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexMatchTimeoutException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexMatchTimeoutException*, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
