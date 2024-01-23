#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexRunner)
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexRunner);
// Type: System.Text.RegularExpressions::RegexRunner
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8929))
// CS Name: ::System.Text.RegularExpressions::RegexRunner*
class CORDL_TYPE RegexRunner : public ::System::Object {
public:
  // Declarations
  /// @brief Field runtextbeg, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_runtextbeg, put = __cordl_internal_set_runtextbeg)) int32_t runtextbeg;

  /// @brief Field runtextend, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_runtextend, put = __cordl_internal_set_runtextend)) int32_t runtextend;

  /// @brief Field runtextstart, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_runtextstart, put = __cordl_internal_set_runtextstart)) int32_t runtextstart;

  /// @brief Field runtext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_runtext, put = __cordl_internal_set_runtext))::StringW runtext;

  /// @brief Field runtextpos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_runtextpos, put = __cordl_internal_set_runtextpos)) int32_t runtextpos;

  /// @brief Field runtrack, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_runtrack, put = __cordl_internal_set_runtrack))::ArrayW<int32_t, ::Array<int32_t>*> runtrack;

  /// @brief Field runtrackpos, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_runtrackpos, put = __cordl_internal_set_runtrackpos)) int32_t runtrackpos;

  /// @brief Field runstack, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_runstack, put = __cordl_internal_set_runstack))::ArrayW<int32_t, ::Array<int32_t>*> runstack;

  /// @brief Field runstackpos, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_runstackpos, put = __cordl_internal_set_runstackpos)) int32_t runstackpos;

  /// @brief Field runcrawl, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_runcrawl, put = __cordl_internal_set_runcrawl))::ArrayW<int32_t, ::Array<int32_t>*> runcrawl;

  /// @brief Field runcrawlpos, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_runcrawlpos, put = __cordl_internal_set_runcrawlpos)) int32_t runcrawlpos;

  /// @brief Field runtrackcount, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_runtrackcount, put = __cordl_internal_set_runtrackcount)) int32_t runtrackcount;

  /// @brief Field runmatch, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_runmatch, put = __cordl_internal_set_runmatch))::System::Text::RegularExpressions::Match* runmatch;

  /// @brief Field runregex, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_runregex, put = __cordl_internal_set_runregex))::System::Text::RegularExpressions::Regex* runregex;

  /// @brief Field _timeout, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__timeout, put = __cordl_internal_set__timeout)) int32_t _timeout;

  /// @brief Field _ignoreTimeout, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreTimeout, put = __cordl_internal_set__ignoreTimeout)) bool _ignoreTimeout;

  /// @brief Field _timeoutOccursAt, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__timeoutOccursAt, put = __cordl_internal_set__timeoutOccursAt)) int32_t _timeoutOccursAt;

  /// @brief Field _timeoutChecksToSkip, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__timeoutChecksToSkip, put = __cordl_internal_set__timeoutChecksToSkip)) int32_t _timeoutChecksToSkip;

  constexpr int32_t& __cordl_internal_get_runtextbeg();

  constexpr int32_t const& __cordl_internal_get_runtextbeg() const;

  constexpr void __cordl_internal_set_runtextbeg(int32_t value);

  constexpr int32_t& __cordl_internal_get_runtextend();

  constexpr int32_t const& __cordl_internal_get_runtextend() const;

  constexpr void __cordl_internal_set_runtextend(int32_t value);

  constexpr int32_t& __cordl_internal_get_runtextstart();

  constexpr int32_t const& __cordl_internal_get_runtextstart() const;

  constexpr void __cordl_internal_set_runtextstart(int32_t value);

  constexpr ::StringW& __cordl_internal_get_runtext();

  constexpr ::StringW const& __cordl_internal_get_runtext() const;

  constexpr void __cordl_internal_set_runtext(::StringW value);

  constexpr int32_t& __cordl_internal_get_runtextpos();

  constexpr int32_t const& __cordl_internal_get_runtextpos() const;

  constexpr void __cordl_internal_set_runtextpos(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_runtrack();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_runtrack() const;

  constexpr void __cordl_internal_set_runtrack(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __cordl_internal_get_runtrackpos();

  constexpr int32_t const& __cordl_internal_get_runtrackpos() const;

  constexpr void __cordl_internal_set_runtrackpos(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_runstack();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_runstack() const;

  constexpr void __cordl_internal_set_runstack(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __cordl_internal_get_runstackpos();

  constexpr int32_t const& __cordl_internal_get_runstackpos() const;

  constexpr void __cordl_internal_set_runstackpos(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_runcrawl();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_runcrawl() const;

  constexpr void __cordl_internal_set_runcrawl(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __cordl_internal_get_runcrawlpos();

  constexpr int32_t const& __cordl_internal_get_runcrawlpos() const;

  constexpr void __cordl_internal_set_runcrawlpos(int32_t value);

  constexpr int32_t& __cordl_internal_get_runtrackcount();

  constexpr int32_t const& __cordl_internal_get_runtrackcount() const;

  constexpr void __cordl_internal_set_runtrackcount(int32_t value);

  constexpr ::System::Text::RegularExpressions::Match*& __cordl_internal_get_runmatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Match*> const& __cordl_internal_get_runmatch() const;

  constexpr void __cordl_internal_set_runmatch(::System::Text::RegularExpressions::Match* value);

  constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get_runregex();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Regex*> const& __cordl_internal_get_runregex() const;

  constexpr void __cordl_internal_set_runregex(::System::Text::RegularExpressions::Regex* value);

  constexpr int32_t& __cordl_internal_get__timeout();

  constexpr int32_t const& __cordl_internal_get__timeout() const;

  constexpr void __cordl_internal_set__timeout(int32_t value);

  constexpr bool& __cordl_internal_get__ignoreTimeout();

  constexpr bool const& __cordl_internal_get__ignoreTimeout() const;

  constexpr void __cordl_internal_set__ignoreTimeout(bool value);

  constexpr int32_t& __cordl_internal_get__timeoutOccursAt();

  constexpr int32_t const& __cordl_internal_get__timeoutOccursAt() const;

  constexpr void __cordl_internal_set__timeoutOccursAt(int32_t value);

  constexpr int32_t& __cordl_internal_get__timeoutChecksToSkip();

  constexpr int32_t const& __cordl_internal_get__timeoutChecksToSkip() const;

  constexpr void __cordl_internal_set__timeoutChecksToSkip(int32_t value);

  static inline ::System::Text::RegularExpressions::RegexRunner* New_ctor();

  /// @brief Method .ctor, addr 0x2960058, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Scan, addr 0x2969bd0, size 0x304, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* Scan(::System::Text::RegularExpressions::Regex* regex, ::StringW text, int32_t textbeg, int32_t textend, int32_t textstart, int32_t prevlen,
                                                         bool quick, ::System::TimeSpan timeout);

  /// @brief Method StartTimeoutWatch, addr 0x2969ed4, size 0x34, virtual false, abstract: false, final false
  inline void StartTimeoutWatch();

  /// @brief Method CheckTimeout, addr 0x2962128, size 0x10, virtual false, abstract: false, final false
  inline void CheckTimeout();

  /// @brief Method DoCheckTimeout, addr 0x296a128, size 0xd4, virtual false, abstract: false, final false
  inline void DoCheckTimeout();

  /// @brief Method Go, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Go();

  /// @brief Method FindFirstChar, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool FindFirstChar();

  /// @brief Method InitTrackCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InitTrackCount();

  /// @brief Method InitMatch, addr 0x2969f08, size 0x1dc, virtual false, abstract: false, final false
  inline void InitMatch();

  /// @brief Method TidyMatch, addr 0x296a0e4, size 0x44, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* TidyMatch(bool quick);

  /// @brief Method EnsureStorage, addr 0x296017c, size 0x48, virtual false, abstract: false, final false
  inline void EnsureStorage();

  /// @brief Method IsBoundary, addr 0x2962320, size 0xf8, virtual false, abstract: false, final false
  inline bool IsBoundary(int32_t index, int32_t startpos, int32_t endpos);

  /// @brief Method IsECMABoundary, addr 0x2962418, size 0xf8, virtual false, abstract: false, final false
  inline bool IsECMABoundary(int32_t index, int32_t startpos, int32_t endpos);

  /// @brief Method DoubleTrack, addr 0x296a29c, size 0xa0, virtual false, abstract: false, final false
  inline void DoubleTrack();

  /// @brief Method DoubleStack, addr 0x296a1fc, size 0xa0, virtual false, abstract: false, final false
  inline void DoubleStack();

  /// @brief Method DoubleCrawl, addr 0x296a33c, size 0xa0, virtual false, abstract: false, final false
  inline void DoubleCrawl();

  /// @brief Method Crawl, addr 0x296a3dc, size 0x5c, virtual false, abstract: false, final false
  inline void Crawl(int32_t i);

  /// @brief Method Popcrawl, addr 0x296a438, size 0x3c, virtual false, abstract: false, final false
  inline int32_t Popcrawl();

  /// @brief Method Crawlpos, addr 0x29622fc, size 0x24, virtual false, abstract: false, final false
  inline int32_t Crawlpos();

  /// @brief Method Capture, addr 0x296226c, size 0x60, virtual false, abstract: false, final false
  inline void Capture(int32_t capnum, int32_t start, int32_t end);

  /// @brief Method TransferCapture, addr 0x2962158, size 0x114, virtual false, abstract: false, final false
  inline void TransferCapture(int32_t capnum, int32_t uncapnum, int32_t start, int32_t end);

  /// @brief Method Uncapture, addr 0x29622cc, size 0x30, virtual false, abstract: false, final false
  inline void Uncapture();

  /// @brief Method IsMatched, addr 0x2962138, size 0x20, virtual false, abstract: false, final false
  inline bool IsMatched(int32_t cap);

  /// @brief Method MatchIndex, addr 0x2962510, size 0x20, virtual false, abstract: false, final false
  inline int32_t MatchIndex(int32_t cap);

  /// @brief Method MatchLength, addr 0x2962530, size 0x20, virtual false, abstract: false, final false
  inline int32_t MatchLength(int32_t cap);

  // Ctor Parameters [CppParam { name: "", ty: "RegexRunner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexRunner(RegexRunner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexRunner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexRunner(RegexRunner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexRunner();

public:
  /// @brief Field runtextbeg, offset: 0x10, size: 0x4, def value: None
  int32_t ___runtextbeg;

  /// @brief Field runtextend, offset: 0x14, size: 0x4, def value: None
  int32_t ___runtextend;

  /// @brief Field runtextstart, offset: 0x18, size: 0x4, def value: None
  int32_t ___runtextstart;

  /// @brief Field runtext, offset: 0x20, size: 0x8, def value: None
  ::StringW ___runtext;

  /// @brief Field runtextpos, offset: 0x28, size: 0x4, def value: None
  int32_t ___runtextpos;

  /// @brief Field runtrack, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___runtrack;

  /// @brief Field runtrackpos, offset: 0x38, size: 0x4, def value: None
  int32_t ___runtrackpos;

  /// @brief Field runstack, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___runstack;

  /// @brief Field runstackpos, offset: 0x48, size: 0x4, def value: None
  int32_t ___runstackpos;

  /// @brief Field runcrawl, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___runcrawl;

  /// @brief Field runcrawlpos, offset: 0x58, size: 0x4, def value: None
  int32_t ___runcrawlpos;

  /// @brief Field runtrackcount, offset: 0x5c, size: 0x4, def value: None
  int32_t ___runtrackcount;

  /// @brief Field runmatch, offset: 0x60, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Match* ___runmatch;

  /// @brief Field runregex, offset: 0x68, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Regex* ___runregex;

  /// @brief Field _timeout, offset: 0x70, size: 0x4, def value: None
  int32_t ____timeout;

  /// @brief Field _ignoreTimeout, offset: 0x74, size: 0x1, def value: None
  bool ____ignoreTimeout;

  /// @brief Field _timeoutOccursAt, offset: 0x78, size: 0x4, def value: None
  int32_t ____timeoutOccursAt;

  /// @brief Field _timeoutChecksToSkip, offset: 0x7c, size: 0x4, def value: None
  int32_t ____timeoutChecksToSkip;

  /// @brief Field TimeoutCheckFrequency offset 0xffffffff size 0x4
  static constexpr int32_t TimeoutCheckFrequency{ static_cast<int32_t>(0x3e8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexRunner, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtextbeg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtextend) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtextstart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtextpos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtrack) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtrackpos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runstack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runstackpos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runcrawl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runcrawlpos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runtrackcount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runmatch) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ___runregex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ____timeout) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ____ignoreTimeout) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ____timeoutOccursAt) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexRunner, ____timeoutChecksToSkip) == 0x7c, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexRunner);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexRunner*, "System.Text.RegularExpressions", "RegexRunner");
