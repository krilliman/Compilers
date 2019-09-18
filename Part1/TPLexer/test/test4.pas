1       {int}                                   {int}                               {Done}
1.      {unknown}                               {int, period}                       {Done}
0.      {unknown}                               {int, period}                       {Done}
0.1     {real}                                  {real}                              {Done}
.1      {period, int}                           {period, int}                       {Done}
1E-2    {real}                                  {real}                              {Done}
1.0E-2  {real}                                  {real}                              {Done}
1.E-2   {unknown, identifier, minus, int}       {int, period, identifier, minus, int}   {Done}
1.0E1.0 {real, period, int}                     {real, period, int}                     {Done}
1E      {unknown}                               {int, identifier}                       {Done}
2E.1    {unknown, period, int}                  {int, identifier, period, int}          {Need to fix that after E you need at least one digit}
1..2    {int, subrange, int}                    {int, subrange, int}                    {Need to fix this : integer, integer, dot ,integer}