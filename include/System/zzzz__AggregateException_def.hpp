#pragma once
// IWYU pragma private; include "System\AggregateException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AggregateException)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class AggregateException;
}
// Write type traits
MARK_REF_T(::System::AggregateException*);
DEFINE_IL2CPP_CLASS(::System::AggregateException*, "System", "AggregateException");
// Dependencies System.Exception
namespace System {
// Is value type: false
// CS Name: System.AggregateException
class CORDL_TYPE AggregateException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_InnerExceptions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* InnerExceptions;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field m_innerExceptions, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_innerExceptions,
                      put = __cordl_internal_set_m_innerExceptions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* m_innerExceptions;

  /// @brief Method Flatten, addr 0x5badd58, size 0x3e4, virtual false, abstract: false, final false
  inline ::System::AggregateException* Flatten();

  /// @brief Method GetObjectData, addr 0x5badbf8, size 0x158, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::AggregateException* New_ctor();

  static inline ::System::AggregateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  static inline ::System::AggregateException* New_ctor(::ArrayW<::System::Exception*> innerExceptions);

  static inline ::System::AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  static inline ::System::AggregateException* New_ctor(::StringW message,
                                                       ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::ArrayW<::System::Exception*> innerExceptions);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions);

  /// @brief Method ToString, addr 0x5bae2e0, size 0x24c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* const& __cordl_internal_get_m_innerExceptions() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*& __cordl_internal_get_m_innerExceptions();

  constexpr void __cordl_internal_set_m_innerExceptions(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* value);

  /// @brief Method .ctor, addr 0x5bace0c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5bada28, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5bad4b8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  /// @brief Method .ctor, addr 0x5bad068, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Exception*> innerExceptions);

  /// @brief Method .ctor, addr 0x5bacf44, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  /// @brief Method .ctor, addr 0x5bad514, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  /// @brief Method .ctor, addr 0x5bad5dc, size 0x44c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  /// @brief Method .ctor, addr 0x5bad0c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::ArrayW<::System::Exception*> innerExceptions);

  /// @brief Method .ctor, addr 0x5bacfa0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  /// @brief Method .ctor, addr 0x5bad0c8, size 0x3cc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions);

  /// @brief Method get_InnerExceptions, addr 0x5badd50, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* get_InnerExceptions();

  /// @brief Method get_Message, addr 0x5bae13c, size 0x1a4, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AggregateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AggregateException(AggregateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AggregateException(AggregateException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2344 };

  /// @brief Field m_innerExceptions, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* ___m_innerExceptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::AggregateException, ___m_innerExceptions) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::AggregateException) == 0x98, "Size mismatch!");

} // namespace System
