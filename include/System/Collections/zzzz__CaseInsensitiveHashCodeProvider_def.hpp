#pragma once
// IWYU pragma private; include "System/Collections/CaseInsensitiveHashCodeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaseInsensitiveHashCodeProvider)
namespace System::Collections {
class IHashCodeProvider;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class CaseInsensitiveHashCodeProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CaseInsensitiveHashCodeProvider);
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.CaseInsensitiveHashCodeProvider
class CORDL_TYPE CaseInsensitiveHashCodeProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__compareInfo, put = __cordl_internal_set__compareInfo)) ::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Convert operator to "::System::Collections::IHashCodeProvider"
  constexpr operator ::System::Collections::IHashCodeProvider*() noexcept;

  /// @brief Method GetHashCode, addr 0x59ce5e4, size 0x9c, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* obj);

  static inline ::System::Collections::CaseInsensitiveHashCodeProvider* New_ctor();

  static inline ::System::Collections::CaseInsensitiveHashCodeProvider* New_ctor(::System::Globalization::CultureInfo* culture);

  constexpr ::System::Globalization::CompareInfo* const& __cordl_internal_get__compareInfo() const;

  constexpr ::System::Globalization::CompareInfo*& __cordl_internal_get__compareInfo();

  constexpr void __cordl_internal_set__compareInfo(::System::Globalization::CompareInfo* value);

  /// @brief Method .ctor, addr 0x59ce4fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x59ce570, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Convert to "::System::Collections::IHashCodeProvider"
  constexpr ::System::Collections::IHashCodeProvider* i___System__Collections__IHashCodeProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseInsensitiveHashCodeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveHashCodeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseInsensitiveHashCodeProvider(CaseInsensitiveHashCodeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveHashCodeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseInsensitiveHashCodeProvider(CaseInsensitiveHashCodeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3704 };

  /// @brief Field _compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::CaseInsensitiveHashCodeProvider, ____compareInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::CaseInsensitiveHashCodeProvider, 0x18>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::CaseInsensitiveHashCodeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CaseInsensitiveHashCodeProvider*, "System.Collections", "CaseInsensitiveHashCodeProvider");
