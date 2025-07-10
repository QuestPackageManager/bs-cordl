#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsTypedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsTypedStream)
namespace Org::BouncyCastle::Cms {
class CmsTypedStream_FullReaderStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream_FullReaderStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsTypedStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsTypedStream_FullReaderStream);
// Dependencies Org.BouncyCastle.Utilities.IO.FilterStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsTypedStream/FullReaderStream
class CORDL_TYPE CmsTypedStream_FullReaderStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsTypedStream_FullReaderStream* New_ctor(::System::IO::Stream* input);

  /// @brief Method Read, addr 0x26757e8, size 0xc, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method .ctor, addr 0x26757d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsTypedStream_FullReaderStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream_FullReaderStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsTypedStream_FullReaderStream(CmsTypedStream_FullReaderStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream_FullReaderStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsTypedStream_FullReaderStream(CmsTypedStream_FullReaderStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsTypedStream_FullReaderStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsTypedStream
class CORDL_TYPE CmsTypedStream : public ::System::Object {
public:
  // Declarations
  using FullReaderStream = ::Org::BouncyCastle::Cms::CmsTypedStream_FullReaderStream;

  __declspec(property(get = get_ContentStream)) ::System::IO::Stream* ContentStream;

  __declspec(property(get = get_ContentType)) ::StringW ContentType;

  /// @brief Field _in, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in)) ::System::IO::Stream* _in;

  /// @brief Field _oid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__oid, put = __cordl_internal_set__oid)) ::StringW _oid;

  /// @brief Method Drain, addr 0x2663b34, size 0x68, virtual false, abstract: false, final false
  inline void Drain();

  static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::StringW oid, ::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Cms::CmsTypedStream* New_ctor(::StringW oid, ::System::IO::Stream* inStream, int32_t bufSize);

  constexpr ::System::IO::Stream* const& __cordl_internal_get__in() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__in();

  constexpr ::StringW const& __cordl_internal_get__oid() const;

  constexpr ::StringW& __cordl_internal_get__oid();

  constexpr void __cordl_internal_set__in(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__oid(::StringW value);

  /// @brief Method .ctor, addr 0x2675698, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor, addr 0x2663b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, ::System::IO::Stream* inStream);

  /// @brief Method .ctor, addr 0x2675718, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, ::System::IO::Stream* inStream, int32_t bufSize);

  /// @brief Method get_ContentStream, addr 0x26757e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_ContentStream();

  /// @brief Method get_ContentType, addr 0x26757d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ContentType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsTypedStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsTypedStream(CmsTypedStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsTypedStream(CmsTypedStream const&) = delete;

  /// @brief Field BufferSize offset 0xffffffff size 0x4
  static constexpr int32_t BufferSize{ static_cast<int32_t>(0x8000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 663 };

  /// @brief Field _oid, offset: 0x10, size: 0x8, def value: None
  ::StringW ____oid;

  /// @brief Field _in, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ____in;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsTypedStream, ____oid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsTypedStream, ____in) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsTypedStream, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsTypedStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsTypedStream*, "Org.BouncyCastle.Cms", "CmsTypedStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsTypedStream_FullReaderStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsTypedStream_FullReaderStream*, "Org.BouncyCastle.Cms", "CmsTypedStream/FullReaderStream");
