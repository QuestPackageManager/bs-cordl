#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringComparer)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class CultureAwareComparer;
}
namespace System {
class Object;
}
namespace System {
class OrdinalCaseSensitiveComparer;
}
namespace System {
class OrdinalIgnoreCaseComparer;
}
// Forward declare root types
namespace System {
class StringComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::StringComparer);
// Type: System::StringComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::StringComparer*
class CORDL_TYPE StringComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_invariantCulture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invariantCulture, put = setStaticF_s_invariantCulture))::System::CultureAwareComparer* s_invariantCulture;

  /// @brief Field s_invariantCultureIgnoreCase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_invariantCultureIgnoreCase, put = setStaticF_s_invariantCultureIgnoreCase))::System::CultureAwareComparer* s_invariantCultureIgnoreCase;

  /// @brief Field s_ordinal, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ordinal, put = setStaticF_s_ordinal))::System::OrdinalCaseSensitiveComparer* s_ordinal;

  /// @brief Field s_ordinalIgnoreCase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ordinalIgnoreCase, put = setStaticF_s_ordinalIgnoreCase))::System::OrdinalIgnoreCaseComparer* s_ordinalIgnoreCase;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Compare, addr 0x2717810, size 0x190, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method Equals, addr 0x27179a0, size 0xc8, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method GetHashCode, addr 0x2717a68, size 0xc8, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* obj);

  static inline ::System::StringComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2717b30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::CultureAwareComparer* getStaticF_s_invariantCulture();

  static inline ::System::CultureAwareComparer* getStaticF_s_invariantCultureIgnoreCase();

  static inline ::System::OrdinalCaseSensitiveComparer* getStaticF_s_ordinal();

  static inline ::System::OrdinalIgnoreCaseComparer* getStaticF_s_ordinalIgnoreCase();

  /// @brief Method get_InvariantCultureIgnoreCase, addr 0x2717708, size 0x58, virtual false, abstract: false, final false
  static inline ::System::StringComparer* get_InvariantCultureIgnoreCase();

  /// @brief Method get_Ordinal, addr 0x2717760, size 0x58, virtual false, abstract: false, final false
  static inline ::System::StringComparer* get_Ordinal();

  /// @brief Method get_OrdinalIgnoreCase, addr 0x27177b8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::StringComparer* get_OrdinalIgnoreCase();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::StringW>"
  constexpr ::System::Collections::Generic::IComparer_1<::StringW>* i___System__Collections__Generic__IComparer_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::StringW>* i___System__Collections__Generic__IEqualityComparer_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

  static inline void setStaticF_s_invariantCulture(::System::CultureAwareComparer* value);

  static inline void setStaticF_s_invariantCultureIgnoreCase(::System::CultureAwareComparer* value);

  static inline void setStaticF_s_ordinal(::System::OrdinalCaseSensitiveComparer* value);

  static inline void setStaticF_s_ordinalIgnoreCase(::System::OrdinalIgnoreCaseComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringComparer(StringComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringComparer(StringComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::StringComparer, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::StringComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::StringComparer*, "System", "StringComparer");
