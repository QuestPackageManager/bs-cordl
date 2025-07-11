#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsProcessableInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsProcessableInputStream)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsProcessableInputStream);
// Dependencies Org.BouncyCastle.Cms.CmsProcessable, Org.BouncyCastle.Cms.CmsReadable, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsProcessableInputStream
class CORDL_TYPE CmsProcessableInputStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input)) ::System::IO::Stream* input;

  /// @brief Field used, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_used, put = __cordl_internal_set_used)) bool used;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept;

  /// @brief Method CheckSingleUsage, addr 0x265ae58, size 0xf0, virtual true, abstract: false, final false
  inline void CheckSingleUsage();

  /// @brief Method GetContent, addr 0x265ae4c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* GetContent();

  /// @brief Method GetInputStream, addr 0x265ada4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  static inline ::Org::BouncyCastle::Cms::CmsProcessableInputStream* New_ctor(::System::IO::Stream* input);

  /// @brief Method Write, addr 0x265adc4, size 0x88, virtual true, abstract: false, final false
  inline void Write(::System::IO::Stream* output);

  constexpr ::System::IO::Stream* const& __cordl_internal_get_input() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_input();

  constexpr bool const& __cordl_internal_get_used() const;

  constexpr bool& __cordl_internal_get_used();

  constexpr void __cordl_internal_set_input(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_used(bool value);

  /// @brief Method .ctor, addr 0x2659f2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr ::Org::BouncyCastle::Cms::CmsProcessable* i___Org__BouncyCastle__Cms__CmsProcessable() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr ::Org::BouncyCastle::Cms::CmsReadable* i___Org__BouncyCastle__Cms__CmsReadable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsProcessableInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsProcessableInputStream(CmsProcessableInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessableInputStream(CmsProcessableInputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 647 };

  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ___input;

  /// @brief Field used, offset: 0x18, size: 0x1, def value: None
  bool ___used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableInputStream, ___input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableInputStream, ___used) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsProcessableInputStream, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableInputStream*, "Org.BouncyCastle.Cms", "CmsProcessableInputStream");
