#pragma once
// IWYU pragma private; include "OSCE/Analytics/ScribeHelperUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScribeHelperUtility)
namespace System {
class Type;
}
// Forward declare root types
namespace OSCE::Analytics {
class ScribeHelperUtility;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Analytics::ScribeHelperUtility);
// Dependencies System.Object
namespace OSCE::Analytics {
// Is value type: false
// CS Name: OSCE.Analytics.ScribeHelperUtility
class CORDL_TYPE ScribeHelperUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field ACCEPTED_DOUBLE_SCRIBE_TYPES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ACCEPTED_DOUBLE_SCRIBE_TYPES, put = setStaticF_ACCEPTED_DOUBLE_SCRIBE_TYPES)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ACCEPTED_DOUBLE_SCRIBE_TYPES;

  /// @brief Field ACCEPTED_FLOAT_SCRIBE_TYPES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ACCEPTED_FLOAT_SCRIBE_TYPES, put = setStaticF_ACCEPTED_FLOAT_SCRIBE_TYPES)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ACCEPTED_FLOAT_SCRIBE_TYPES;

  /// @brief Field ACCEPTED_INT_SCRIBE_TYPES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ACCEPTED_INT_SCRIBE_TYPES, put = setStaticF_ACCEPTED_INT_SCRIBE_TYPES)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ACCEPTED_INT_SCRIBE_TYPES;

  /// @brief Field ACCEPTED_STRING_ARRAY_SCRIBE_TYPES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ACCEPTED_STRING_ARRAY_SCRIBE_TYPES, put = setStaticF_ACCEPTED_STRING_ARRAY_SCRIBE_TYPES)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*>
      ACCEPTED_STRING_ARRAY_SCRIBE_TYPES;

  /// @brief Field ACCEPTED_STRING_SCRIBE_TYPES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ACCEPTED_STRING_SCRIBE_TYPES, put = setStaticF_ACCEPTED_STRING_SCRIBE_TYPES)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ACCEPTED_STRING_SCRIBE_TYPES;

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ACCEPTED_DOUBLE_SCRIBE_TYPES();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ACCEPTED_FLOAT_SCRIBE_TYPES();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ACCEPTED_INT_SCRIBE_TYPES();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ACCEPTED_STRING_ARRAY_SCRIBE_TYPES();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_ACCEPTED_STRING_SCRIBE_TYPES();

  static inline void setStaticF_ACCEPTED_DOUBLE_SCRIBE_TYPES(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_ACCEPTED_FLOAT_SCRIBE_TYPES(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_ACCEPTED_INT_SCRIBE_TYPES(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_ACCEPTED_STRING_ARRAY_SCRIBE_TYPES(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_ACCEPTED_STRING_SCRIBE_TYPES(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScribeHelperUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScribeHelperUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScribeHelperUtility(ScribeHelperUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScribeHelperUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScribeHelperUtility(ScribeHelperUtility const&) = delete;

  /// @brief Field DOUBLE_TYPE_SCRIBE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DOUBLE_TYPE_SCRIBE_KEY{ u"double" };

  /// @brief Field FLOAT_TYPE_SCRIBE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString FLOAT_TYPE_SCRIBE_KEY{ u"float" };

  /// @brief Field INT_TYPE_SCRIBE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString INT_TYPE_SCRIBE_KEY{ u"int" };

  /// @brief Field STRING_TYPE_SCRIBE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString STRING_TYPE_SCRIBE_KEY{ u"normal" };

  /// @brief Field STRING_VECTOR_SCRIBE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString STRING_VECTOR_SCRIBE_KEY{ u"normvector" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21723 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::ScribeHelperUtility, 0x10>, "Size mismatch!");

} // namespace OSCE::Analytics
NEED_NO_BOX(::OSCE::Analytics::ScribeHelperUtility);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::ScribeHelperUtility*, "OSCE.Analytics", "ScribeHelperUtility");
